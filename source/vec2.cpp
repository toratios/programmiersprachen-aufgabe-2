#include "vec2.hpp"


Vec2::Vec2() :
  x_{0.0},
  y_{0.0} {}

Vec2::Vec2(float x, float y) :
  x_{x},
  y_{y} {}

Vec2& Vec2::operator +=( Vec2 const& v ) {
    this->x_ += v.x_;
    this->y_ += v.y_;
    return *this;
  }

Vec2& Vec2::operator -=( Vec2 const& v ) {
    this->x_ -= v.x_;
    this->y_ -= v.y_;
    return *this;
  }

Vec2& Vec2::operator *=( float s ) {
    this->x_ *= s;
    this->y_ *= s;
    return *this;
  }

Vec2& Vec2::operator /=( float s ) {
    if (s == 0){
      this->x_ = 0;
      this->x_ = 0;
      return *this;
    }
    this->x_ /= s;
    this->y_ /= s;
    return *this;
  }

Vec2 operator +( Vec2 const & u, Vec2 const & v ) {
    Vec2 vec;
    vec.x_ = u.x_ + v.x_;
    vec.y_ = u.y_ + v.y_;
    return vec;
  }

Vec2 operator -( Vec2 const & u, Vec2 const & v ) {
    Vec2 vec;
    vec.x_ = u.x_ - v.x_;
    vec.y_ = u.y_ - v.y_;
    return vec;
  }

Vec2 operator *( Vec2 const & v, float s ) {
    Vec2 vec;
    vec.x_ = v.x_ * s;
    vec.y_ = v.y_ * s;
    return vec;
  }

Vec2 operator *( float s, Vec2 const & v ) {
    Vec2 vec;
    vec.x_ = v.x_ * s;
    vec.y_ = v.y_ * s;
    return vec;
  }

Vec2 operator /( Vec2 const & v, float s ) {
    Vec2 vec;
    if(s == 0){
      return vec;
    }
    vec.x_ = v.x_ / s;
    vec.y_ = v.y_ / s;
    return vec;
  }