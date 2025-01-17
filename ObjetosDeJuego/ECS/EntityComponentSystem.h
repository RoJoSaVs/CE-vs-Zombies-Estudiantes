#ifndef CE_VS_ZOMBIES_ESTUDIANTES_ENTITYCOMPONENTSYSTEM_H
#define CE_VS_ZOMBIES_ESTUDIANTES_ENTITYCOMPONENTSYSTEM_H

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <bitset>
#include <array>
#include "../../ProcesamientoDeJuego/Board.h"


class Component;
class Entity;

using ComponentID = std::size_t;

inline ComponentID getComponentTypeID(){
    static ComponentID lastID = 0;
    return lastID++;
}

template <typename T> inline ComponentID getComponentTypeID() noexcept {
    static ComponentID typeID = getComponentTypeID();
    return typeID;
}

constexpr std::size_t maxComponents = 32;

using ComponentBitset = std::bitset<maxComponents>;
using ComponentArray = std::array<Component*, maxComponents>;

class Board;

class Component{
public:
    Entity* entity;

    virtual void init(){};
    virtual void actualizar(Board *board){};
    virtual int values(){};
    virtual void draw(){};

    virtual ~Component(){};
};

class Entity{
private:
    bool activate = true;
    std::vector<std::unique_ptr<Component>> components;

    ComponentArray componentArray;
    ComponentBitset componentBitset;

public:
    void actualizar(Board *arr){
        for (auto& c: components) c->actualizar(arr);
    }

    int values(){
        for (auto& c: components) c->values();
    }

    void draw(){
        for (auto& c: components) c->draw();
    };
    bool isActive() const {return activate; };
    void destroy() {activate = false; };

    template <typename T> bool hasComponent() const { return componentBitset[getComponentTypeID<T>()]; };

    template <typename T, typename... TArgs>
    T& addComponent(TArgs&... mArgs){
        T* c(new T(std::forward<TArgs>(mArgs)...));
        c->entity = this;
        std::unique_ptr<Component> uPtr{ c };
        components.emplace_back(std::move(uPtr));

        componentArray[getComponentTypeID<T>()] = c;
        componentBitset[getComponentTypeID<T>()] = true;

        c->init();
        return *c;
    }
    template<typename T> T& getComponent() const{
        auto ptr(componentArray[getComponentTypeID<T>()]);
        return *static_cast<T*> (ptr);
    }

};

class Manager{
private:
    std::vector<std::unique_ptr<Entity>> entities;

public:
    void actualizar(Board *arr){
        for (auto& e : entities) e->actualizar(arr);
    }

    void draw(){
        for (auto& e : entities) e->draw();
    }

    void refresh(){
        entities.erase(std::remove_if(std::begin(entities), std::end(entities),
                [](const std::unique_ptr<Entity> &mEntity){
            return !mEntity->isActive();
        }),
                std::end(entities));
    }

    Entity& addEntity(){
        Entity* e = new Entity;
        std::unique_ptr<Entity> uPtr{ e };
        entities.emplace_back(std::move(uPtr));
        return *e;
    }

};

#endif //CE_VS_ZOMBIES_ESTUDIANTES_ENTITYCOMPONENTSYSTEM_H
