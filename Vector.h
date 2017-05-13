
class Vector {

public:

	Vector();		// two different constructors
	Vector(Vector *);
	~Vector();


	Vector operator=(const Vector &);
	double x() const { return p_x; }
	double y() const { return p_y; }
	double z() const { return p_z; }

	void Cross(const Vector in, Vector * out);

private:

	double p_x, p_y, p_z;

};
