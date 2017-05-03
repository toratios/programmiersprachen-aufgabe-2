# ifndef MAT2_HPP
# define MAT2_HPP
// Mat2 class definition
struct Mat2
{
    float xx_;      //  xx xy
    float xy_;      //  yx yy
    float yx_;    
    float yy_;

    Mat2();
    Mat2(float xx,float xy, float yx, float yy);

    Vec2& operator +=( Vec2 const& v );
    Vec2& operator -=( Vec2 const& v );
    Vec2& operator *=( float s );
    Vec2& operator /=( float s );
};