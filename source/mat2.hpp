# ifndef MAT2_HPP
# define MAt2_HPP
// Mat2 class definition
struct Mat2
{
    float xx_;      //  xx xy
    float xy_;      //  yx yy
    float yx_;    
    float yy_;

    Mat2();
    Mat2(float xx,float xy, float yx, float yy);

    Mat2& operator *=(Mat2 const& m );
    float det() const;
};

Mat2 operator *( Mat2 const& m1 , Mat2 const& m2 );

# endif