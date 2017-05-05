# ifndef COLOR_HPP
# define COLOR_HPP

// Color class definition
struct Color
{
    float r_;
    float g_;
    float b_;

    Color();
    Color(float r, float g, float b);
};

Color(){
    r_=0.0;
    g_=0.0;
    b_=0.0;
}
# endif // COLOR_HPP