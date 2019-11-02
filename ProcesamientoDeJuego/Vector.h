#ifndef CE_VS_ZOMBIES_ESTUDIANTES_VECTOR_H
#define CE_VS_ZOMBIES_ESTUDIANTES_VECTOR_H

#pragma once

#include "iostream"

class Vector {

public:
    float x, y;

    Vector();
    Vector(float x, float y);

    Vector& Add(const Vector& vector);
    Vector& Substract(const Vector& vector);
    Vector& Multiply(const Vector& vector);
    Vector& Divide(const Vector& vector);

    friend Vector& operator+(Vector& vector1, const Vector& vector2);
    friend Vector& operator-(Vector& vector1, const Vector& vector2);
    friend Vector& operator*(Vector& vector1, const Vector& vector2);
    friend Vector& operator/(Vector& vector1, const Vector& vector2);

    Vector& operator+=(const Vector& vector);
    Vector& operator-=(const Vector& vector);
    Vector& operator*=(const Vector& vector);
    Vector& operator/=(const Vector& vector);

    friend std::ostream&operator<<(std::ostream& stream, const Vector& vector);
};


#endif //CE_VS_ZOMBIES_ESTUDIANTES_VECTOR_H
