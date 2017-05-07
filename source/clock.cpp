#include "window.hpp"
#include <GLFW/glfw3.h>
#include <utility>
#include <cmath>
#include "circle.hpp"

int main(int argc, char* argv[])
{
  Window win{std::make_pair(800,800)};

  while (!win.should_close()) {
    if (win.get_key(GLFW_KEY_ESCAPE) == GLFW_PRESS) {
      win.close();
    }

    float t = win.get_time(); 

    Vec2 center{400,350};

    Circle clock{center, 300, Color{0.0,0.8,1.0}};

    clock.draw(win); 

    Vec2 s{sin((t*6*M_PI)/180)*280,-cos((t*6*M_PI)/180)*280};
    Vec2 m{sin((0.1*t*M_PI)/180)*240,-cos((0.1*t*M_PI)/180)*240};
    Vec2 h{sin((0.0075*t*M_PI)/180)*200,-cos((0.0075*t*M_PI)/180)*200};

    s += center;
    m += center;
    h += center;

    win.draw_line(center.x_,center.y_,s.x_,s.y_,1.0,0.0,0.0);
    win.draw_line(center.x_,center.y_,m.x_,m.y_,1.0,0.5,0.0);
    win.draw_line(center.x_,center.y_,h.x_,h.y_,1.0,0.5,1.0);

    std::string text = "time: " + std::to_string((int)t/3600 %24) + ":" 
    + std::to_string((int)t/60 %60) + ":" + std::to_string((int)t%60);
    win.draw_text(10, 5, 35.0f, text);
  
    win.update();
  }

  return 0;
}