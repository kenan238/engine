#pragma once

namespace neoskye {

template <typename T>
class Vector2 {
  public:
    Vector2(T x, T y) {
        this->x = x;
        this->y = y;
    }
    T x;
    T y;
  
    Vector2 operator+(Vector2 const& obj);
    Vector2 operator*(Vector2 const& obj);
    Vector2 operator/(Vector2 const& obj);
    void mag();
    void normalize();
};

} // namespace neoskye
