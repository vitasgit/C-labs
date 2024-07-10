 #include <stdio.h>
 #include <math.h>

 float dist(int x1, int y1, int x2, int y2)
 {
     float res;
     res = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

     return res;
 }

 float area(int x1, int y1, int x2, int y2, int x3, int y3)
 {
     float a, b, c, p, s;

     a = dist(x1, y1, x2, y2);
     b = dist(x1, y1, x3, y3);
     c = dist(x2, y2, x3, y3);

     p = (a + b + c) / 2;
     s = sqrt(p*(p - a)*(p - b)*(p - c));

     return s;
 }

 int main()
 {
     int x1, y1, x2, y2, x3, y3;
     float s;

     printf("Введите коор-ты точек:\n");
     scanf("%d%d", &x1, &y1);
     scanf("%d%d", &x2, &y2);
     scanf("%d%d", &x3, &y3);

     s = area(x1, y1, x2, y2, x3, y3);
     printf("s = %.3f\n", s);

     return 0;
 }
