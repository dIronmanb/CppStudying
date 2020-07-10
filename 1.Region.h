//Region.j

class Region
{
public:
	Region(void);
	Region(int l, int t, int r, int b);

	/////function that gets Info from rectangle/////
	int GetWidth() const;
	int GetHeight() const;
	void GetStartPoint(int& x, int& y) const;
	void GetEndPoint(int& x, int& y) const;
	void GetCenterPoint(int& x, int& y)const;
	bool IsPointInRegion(int x, int y) const;

	////function that process the Info////
	void SetRect(int l, int t, int r, int b);
	void Move(int x, int y);
	void Resize(int width, int height);

	/// Union of each region ///
	void UnionRegion(const Region& r1, const Region& r2);
	/// Intersection of each region ///
	void IntersectRegion(const Region& r1, const Region& r2);

	/// The functions denoting rectangular region ///
	void Show(void);
	static void SetNotation(int notation);

private:
	int left;
	int top;
	int right;
	int bottom;

	static int notation;
public:
	enum {POINT_POINT, POINT_SIZE};
};

