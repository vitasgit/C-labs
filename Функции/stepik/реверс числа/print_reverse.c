 #include <stdio.h>

 void print_revers(int x)
 {
     int res = 0;

     res = res * 10 + x % 10;
     x /= 10;
     res = res * 10 + x % 10;
     x /= 10;
     res = res * 10 + x % 10;
     x /= 10;
     res = res * 10 + x % 10;
     x /= 10;
     res = res * 10 + x % 10;
     x /= 10;
     res = res * 10 + x % 10;
     x /= 10;

     printf("%d\n", res);

 }

 int main()
 {
     int x;
     scanf("%d", &x);
     print_revers(x);

     return 0;
 }
