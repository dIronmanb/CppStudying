#include <stdio.h>
#include "three_dimension.h"

int main(void)
{
	Vector a,b,c1,c2;
	a.SetVector(3, 1, 1);
	b.SetVector(1, 2, 4);

	a.ShowVector();
	b.ShowVector();
	c1.ShowVector();

	printf("a dot b : %d\n",a.Dot(b));
	printf("b dot a : %d\n", b.Dot(a));

	c1.Cross(a, b); printf("a cross b: "); c1.ShowVector();
	c2.Cross(b, a); printf("b cross a: "); c2.ShowVector();
	
	return 0;
}

