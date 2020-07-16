//three_dimension.h
#include <iostream>

class Vector
{
public:
	Vector(void);
	int TE(int);
	void SetVector(int x, int y, int z);
	int Dot(Vector); //return으로 값 가져오기 (매개변수 건들지 X)
	void Cross(Vector, Vector); //(매개변수 건듦X) )
	void ShowVector(void);
private:
	int x;
	int y;
	int z;
};

Vector::Vector(void)
{
	x = 0;
	y = 0;
	z = 0;
}

void Vector::SetVector(int _x, int _y, int _z)
{
	x = _x;
	y = _y;
	z = _z;
}

int Vector::TE(int num)
{
	switch (num) {
	case 0: return x;
	case 1: return y;
	case 2: return z;
	}
}
//////////////////

int Vector::Dot(Vector a) //클래스를 parameter로 가질 수 있다.
{
	int sum = 0;
	int e1, e2, e3;

	e1 = x * a.TE(1);
	e2 = y * a.TE(2);
	e3 = z * a.TE(3);
	sum = e1 + e2 + e3;
	return sum;
}

void Vector::Cross(Vector a, Vector b)
{
	x += (a.TE(1) * b.TE(2));
	x -= (a.TE(2) * b.TE(1));
	y += (a.TE(2) * b.TE(0));
	y -= (a.TE(0) * b.TE(2));
	z += (a.TE(0) * b.TE(1));
	z -= (a.TE(1) * b.TE(0));
}

void Vector::ShowVector(void)
{
	printf("(%di, %dj, %dk)\n", x, y, z);
}