
#include <string>
#include <sstream>

struct vec3
{
	float x, y, z;
};


class Parse
{

public:

	Parse() {}

	static vec3 Vector(std::stringstream & Stream);

};
