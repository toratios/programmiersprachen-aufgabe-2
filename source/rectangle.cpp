# include "rectangle.hpp"

Rectangle::Rectangle() :
    min_{Vec2{0.0,0.0}},
    max_{Vec2{1.0,1.0}},
    color_{Color{}} {}

Rectangle::Rectangle(Vec2 const& min, Vec2 const& max) :
    min_{min},
    max_{max},
    color_{Color{}} {}

Vec2 const& Rectangle::get_min(){
    return this->min_;
}

Vec2 const& Rectangle::get_max(){
    return this->max_;
}

float Rectangle::circumference() const{
    float a = 0;
    float b = 0;
    
    if(this->max_.x_>this->min_.x_){
        a = this->max_.x_-this->min_.x_;
    }else{
        a = this->min_.x_-this->max_.x_;
    };
    if(this->max_.y_>this->min_.y_){
        b = this->max_.y_-this->min_.y_;
    }else{
        b = this->min_.y_-this->max_.y_;
    };
    return (a)*2+(b)*2;
}
