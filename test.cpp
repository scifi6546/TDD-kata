#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "lib.hpp"
TEST_CASE("Power","[power]"){
    REQUIRE(int_pow(5,1)==5);
    REQUIRE(int_pow(5,2)==25);
}
TEST_CASE( "Calculator", "[factorial]" ) {
   REQUIRE(calc("")==0);
   REQUIRE(calc("4")==4);
   REQUIRE(calc("42")==42);

}
