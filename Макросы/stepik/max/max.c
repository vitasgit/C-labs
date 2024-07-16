 #include <stdio.h>
 #define  max(a, b) ((a)>(b) ? (a) : (b))

 int main()
 {
     int a, b;
     float fa, fb;

     scanf("%d%d", &a, &b);
     scanf("%f%f", &fa, &fb);

     printf("%d\n", max(a, b));
     printf("%f\n", max(fa, fb));

     return 0;
 }
