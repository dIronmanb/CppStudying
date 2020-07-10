#include "Region.h"

int main(void)
{
	Region::SetNotation(Region::POINT_POINT);

	Region r1(10, 10, 100, 100);
	Region r2(30, 30, 150, 150);
	Region r3;

	r3.IntersectRegion(r1, r2);
	r3.Show();

	r3.UnionRegion(r1, r2);
	r3.Show();

	r3.Move(50, 50);
	r3.Show();

	r3.Resize(200, 200);
	r3.Show();

	Region::SetNotation(Region::POINT_SIZE);
	r1.Show();
	r2.Show();
	r3.Show();

	return 0;

}