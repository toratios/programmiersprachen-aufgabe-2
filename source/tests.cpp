#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "vec2.hpp"


TEST_CASE ( " describe_vec2 " , " [ vec2 ] " )
{
  Vec2 v(5.0,-5.0);
  REQUIRE (v.x_ == 5.0);
  REQUIRE (v.y_ == -5.0);
  Vec2 v2;
  REQUIRE (v2.x_ == 0.0);
  REQUIRE (v2.y_ == 0.0);
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
