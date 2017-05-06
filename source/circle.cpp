#include "circle.hpp"
#include <cmath>


Circle::Circle() :
    center_{Vec2{1.0,1.0}},
    r_{1.0},
    color_{Color{}} {}

Circle::Circle(Vec2 const& center, float r) :
    center_{center},
    r_{r},
    color_{Color{}} {}

Circle::Circle(Color const& col) :
    center_{Vec2{1.0,1.0}},
    r_{1.0},
    color_{col} {}

Circle::Circle(Vec2 const& center, float r, Color const& col) :
    center_{center},
    r_{r},
    color_{col} {}

Vec2 const& Circle::get_center() const{
    return this->center_;
}

float Circle::get_r() const{
    return this->r_;   
}

Color const& Circle::get_color() const{
    return this->color_;
}

float Circle::circumference() const{
    float circ = 2*M_PI*this->r_;
    return circ;
}

void Circle::draw(Window const& win) const{
     
} 