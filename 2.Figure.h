#include <iostream>
using namespace std;

class Figure
{
public:
    Figure(int x, int y, int width, int height);
    ~Figure();

    void Move(int x, int y);
    void Resize(int width, int height);
    void Draw();

protected:
    int x;
    int y;
    int width;
    int height;
};

//Figure함수 정의
Figure::Figure(int x, int y, int width, int height)
{
    Move(x, y);
    Resize(width, height);
}

Figure::~Figure()
{
}

void Figure::Move(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Figure::Resize(int width, int height)
{
    this->width = width;
    this->height = height;
}

void Figure::Draw()
{
    cout << "Figure::Draw" << endl;
}

//Figure에 따른 각각의 도형들
class Ellipse : public Figure {
public:
    Ellipse(int x, int y, int width, int height);
    ~Ellipse();
    void Draw();
};

class Triangle : public Figure {
public:
    Triangle(int x, int y, int width, int height);
    ~Triangle();
    void Draw();
};

class Rectangle : public Figure {
public:
    Rectangle(int x, int y, int width, int height);
    ~Rectangle();
    void Draw();
};

Ellipse::Ellipse(int x, int y, int width, int height) : Figure(x, y, width, height)
{

}

Triangle::Triangle(int x, int y, int width, int height) : Figure(x, y, width, height)
{

}

Rectangle::Rectangle(int x, int y, int width, int height) : Figure(x, y, width, height)
{

}

Ellipse::~Ellipse() {}
Triangle::~Triangle() {}
Rectangle::~Rectangle() {}

void Ellipse::Draw()
{
    cout << "Draw Ellipse: ";
    cout << "(" << x << "," << y << "), ";
    cout << width << " x " << height;
    cout << endl;
}

void Triangle::Draw()
{
    cout << "Draw Triangle: ";
    cout << "(" << x << "," << y << "), ";
    cout << width << " x " << height;
    cout << endl;
}

void Rectangle::Draw()
{
    cout << "Draw Rectangle: ";
    cout << "(" << x << "," << y << "), ";
    cout << width << " x " << height;
    cout << endl;
}

