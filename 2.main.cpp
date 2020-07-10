#include "Figure.h"

int main(void)
{
    Ellipse ellipse(30, 20, 50, 20);
    Triangle triangle(10, 10, 20, 30);
    Rectangle rectangle(20, 30, 10, 20);

    ellipse.Draw();
    triangle.Draw();
    rectangle.Draw();

    return 0;
}