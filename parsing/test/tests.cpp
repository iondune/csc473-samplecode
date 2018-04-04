
#include <parse.hpp>

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include <iostream>
#include <limits>
using namespace std;

TEST_CASE("Vectors are parsed correctly")
{
	stringstream s;
	vec3 v;

	s.str("<3.0>");
	v = Parse::Vector(s);
	REQUIRE(v.x == 3.0);
	REQUIRE(v.y == 0.0);
	REQUIRE(v.z == 0.0);

	s.str("<3.0, 1.0, 2.0>");
	v = Parse::Vector(s);
	REQUIRE(v.x == 3.0);
	REQUIRE(v.y == 1.0);
	REQUIRE(v.z == 2.0);

	s.str("<3.0, 1.0 2.0>");
	v = Parse::Vector(s);
	REQUIRE(v.x == 3.0);
	REQUIRE(v.y == 1.0);
	REQUIRE(v.z == 0.0);
}
