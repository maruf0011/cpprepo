#include "Vector.h"

Vector::Vector(int sz):sz(sz),element(new double[sz]){}

double& Vector::operator[](int idx)
{
	return element[idx];
}

int Vector::size()
{
	return sz;
}