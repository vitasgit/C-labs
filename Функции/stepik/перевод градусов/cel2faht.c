 #include <stdio.h>

 float fahr(int cel) {
     return (cel * 1.8) + 32;
 };

 int main()
 {
     int cel;    // градусы Цельсия
     float f;    // градусы Фаренгейта

     scanf("%d", &cel);
     f = fahr(cel);
     printf("%.2f\n", f);

     return 0;
 }
