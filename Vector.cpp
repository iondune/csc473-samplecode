
#include "Vector.h"


Vector::Vector(void) {
	p_x = p_y = p_z = 0;
}

Vector::Vector(Vector *v) {
	p_x = v->p_x;
	p_y = v->p_y;
	p_z = v->p_z;
}

Vector Vector::operator =(const Vector & v1) {
	this->p_x = v1.x();
	this->p_y = v1.y();
	this->p_z = v1.z();
}

void Vector::Cross(const vector in, vector * out) {
	out->p_x = (p_y * in.p_z - p_z*in.p_y);
	// ...
}


////// Example usage

Vector *v1 = new Vector(); // bye bye malloc!
Vector *v2 = new Vector(v1);
