#include "mat2.hpp"


Mat2::Mat2() :
  xx_{1.0},
  xy_{0.0},
  yx_{0.0},
  yy_{1.0} {}

Mat2::Mat2(float xx, float xy, float yx, float yy) :
  xx_{xx},
  xy_{xy},
  yx_{yx},
  yy_{yy} {}

Mat2& Mat2::operator *=( Mat2 const& m ) {
    this->xx_ = (xx_ * m.xx_) + (xy_ * m.yx_);
    this->xy_ = (xx_ * m.xy_) + (xy_ * m.yy_);
    this->yx_ = (yx_ * m.xx_) + (yy_ * m.yx_);
    this->yy_ = (yx_ * m.xy_) + (yy_ * m.yy_);
    return *this;
  }

float Mat2::det() const{
    return(this->xx_ * this->yy_ - this->xy_ * this->yx_);
  }

Mat2 operator *=(Mat2 const& m1, Mat2 const& m2){
    return Mat2(m1) *= m2;
  }