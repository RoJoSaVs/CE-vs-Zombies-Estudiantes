#include "Vector.h"

Vector::Vector() {
    x = 0.0f;
    y = 0.0f;
}

Vector::Vector(float x, float y) {
    this->x = x;
    this->y = y;
}

Vector &Vector::Add(const Vector &vector) {
    this->x += vector.x;
    this->y += vector.y;

    return *this;
}

Vector &Vector::Substract(const Vector &vector) {
    this->x -= vector.x;
    this->y -= vector.y;

    return *this;
}

Vector &Vector::Multiply(const Vector &vector) {
    this->x *= vector.x;
    this->y *= vector.y;

    return *this;
}

Vector &Vector::Divide(const Vector &vector) {
    this->x /= vector.x;
    this->y /= vector.y;

    return *this;
}

Vector &operator+(Vector &vector1, const Vector &vector2) {
    return vector1.Add(vector2);
}

Vector &operator-(Vector &vector1, const Vector &vector2) {
    return vector1.Substract(vector2);
}

Vector &operator*(Vector &vector1, const Vector &vector2) {
    return vector1.Multiply(vector2);
}

Vector &operator/(Vector &vector1, const Vector &vector2) {
    return vector1.Divide(vector2);
}

Vector &Vector::operator+=(const Vector &vector) {
    return this->Add(vector);
}

Vector &Vector::operator-=(const Vector &vector) {
    return this->Substract(vector);
}

Vector &Vector::operator*=(const Vector &vector) {
    return this->Multiply(vector);
}

Vector &Vector::operator/=(const Vector &vector) {
    return this->Divide(vector);
}

std::ostream&operator<<(std::ostream& stream, const Vector& vector){
    stream << "(" << vector.x << "," << vector.y << ")";
    return stream;
}

