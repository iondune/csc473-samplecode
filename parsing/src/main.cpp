
#include "parse.hpp"

#include <iostream>
using namespace std;


int main()
{
	stringstream s;
	vec3 v;

	s.str("<3.0>");
	v = Parse::Vector(s);
	cout << v.x << " " << v.y << " " << v.z << endl;

	s.str("<3.0, 1.0, 2.0>");
	v = Parse::Vector(s);
	cout << v.x << " " << v.y << " " << v.z << endl;

	s.str("<3.0, 1.0 2.0>");
	v = Parse::Vector(s);
	cout << v.x << " " << v.y << " " << v.z << endl;

	return 0;
}
