cmake_minimum_required(VERSION 3.14)
project(CE-vs-Zombies-Estudiantes)


include(FindPkgConfig)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)


add_executable(CE-vs-Zombies-Estudiantes main.cpp ObjetosDeJuego/ObjetoDeJuego.cpp ObjetosDeJuego/ObjetoDeJuego.h ObjetosDeJuego/ID.h ObjetosDeJuego/ID.cpp
        GUI/Window.cpp GUI/Window.h GUI/gameWindow.cpp GUI/gameWindow.h Algoritmos/Algoritmo_aStar.cpp Algoritmos/Backtracking.cpp Algoritmos/Genetico.cpp
        ProcesamientoDeJuego/Juego.h ProcesamientoDeJuego/Juego.cpp ObjetosDeJuego/ListObjetosJuego.cpp ObjetosDeJuego/ListObjetosJuego.h ObjetosDeJuego/Enemigo.cpp ObjetosDeJuego/Enemigo.h Algoritmos/Algoritmo_aStar.h)
target_link_libraries(CE-vs-Zombies-Estudiantes Qt5::Core Qt5::Gui Qt5::Widgets)