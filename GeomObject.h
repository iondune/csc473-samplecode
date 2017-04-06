
class GeomObject {

public:

	GeomObject(void);
	~GeomObject();

	void parse_pigment(FILE *fp);

protected:

	float tx, ty, tz;

private:

};

class Sphere : public GeomObject { // derived (subcl)

public:

	Sphere(void);
	~Sphere();

private:

	float cx, cy, cz;
	float rad;

};
