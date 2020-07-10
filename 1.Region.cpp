//Region.cpp
#include <stdio.h>
#include "Region.h"

int Region::notation = Region::POINT_POINT;

Region::Region(void)
{
	SetRect(0, 0, 0, 0); //initializing to zero
}

Region::Region(int l, int t, int r, int b)
{
	SetRect(l, t, r, b); //initializing to user's values
}

void Region::SetRect(int l, int t, int r, int b)
{
	left = l;
	top = t;
	right = r;
	bottom = b;
}

int Region::GetWidth() const
{
	return right - left;
}

int Region::GetHeight() const
{
	return bottom - top;
}

void Region::GetStartPoint(int& x, int& y) const
{
	x = left;
	y = top;
}

void Region::GetEndPoint(int& x, int& y) const
{
	x = right;
	y = bottom;
}

void Region::GetCenterPoint(int& x, int& y) const
{
	x = (left + right) / 2;
	y = (top + bottom) / 2;
}

bool Region::IsPointInRegion(int x, int y) const
{
	return (x >= left && y <= right && y >= top && y <= bottom);
}

void Region::Move(int x, int y)
{
	left += x;
	right += x;

	top += y;
	bottom += y;
}

void Region::Resize(int width, int height)
{
	int x, y;
	GetCenterPoint(x, y);

	left = x - width / 2;
	top = y - height / 2;
	right = left + width;
	bottom = top + height;

}

void Region::UnionRegion(const Region& r1, const Region& r2)
{
	left = r1.left > r2.left ? r1.left : r2.left;
	right = r1.right < r2.right ? r1.right : r2.right;
	top = r1.top > r2.top ? r1.top : r2.top;
	bottom = r1.bottom < r2.bottom ? r1.bottom : r2.bottom;

	if (left >= right || top >= bottom)
	{
		left = top = right = bottom = 0;
	}
}

void Region::IntersectRegion(const Region& r1, const Region& r2)
{
	left = r1.left < r2.left ? r1.left : r2.left;
	right = r1.right > r2.right ? r1.right : r2.right;
	top = r1.top < r2.top ? r1.top : r2.top;
	bottom = r1.bottom > r2.bottom ? r1.bottom : r2.bottom;
}

void Region::SetNotation(int n)
{
	notation = n;
}

void Region::Show(void)
{
	if (notation == POINT_POINT)
	{
		printf("(%d, %d), (%d, %d)\n", left, top, right, bottom);
	}
	else
	{
		printf("(%d, %d), (%d x %d)\n", left, top, GetWidth(), GetHeight());
	}
}




