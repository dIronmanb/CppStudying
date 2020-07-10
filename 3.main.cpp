#include "Figure.h"
#define FIGURES (10)

int main(void)
{
    Figure* figures[FIGURES] = {
    new Ellipse(30, 20, 50, 20),
    new Triangle(10, 10, 20, 30),
    new Rectangle(20, 30, 10, 20),
    new Ellipse(12, -13, 10, 20),
    new Ellipse(1, 2, 13, 7),
    new Triangle(35, 58, 100, 20),
    new Triangle(-1, -1, 29, 53),
    new Rectangle(25, 37, 8, 21),
    new Rectangle(20, -33, 94, 87),
    };

    int i;
    for (i = 0; i < FIGURES; i++)
    {
        figures[i]->Draw();
    }

    for (i = 0; i < FIGURES; i++)
    {
        delete figures[i];
    }

    return 0;
}
