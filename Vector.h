
class Vector {

public:

	Vector(void);		// two different constructors
	Vector(Vector *);
	~Vector(void);


	Vector operator=(const Vector &);
	double x(void) const { return p_x; }
	double y(void) const { return p_y; }
	double z(void) const { return p_z; }

	void Cross(const Vector in, Vector * out);

private:

	double p_x, p_y, p_z;

};
