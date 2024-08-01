#include <stdio.h>

struct Rect {
    int x;      // х координата левой верхней вершины
    int y;      // y координата левой верхней вершины
    int width;  // ширина
    int height; // высота
};

void move(struct Rect * p, int dx) {
    p->x += dx;
}

int main()
{
    struct Rect a = {-7, 5, 12, 8};
    int dx = -6;

    move(&a, dx);
    printf("%d %d %d %d\n", a.x, a.y, a.width, a.height);
    return 0;
}
