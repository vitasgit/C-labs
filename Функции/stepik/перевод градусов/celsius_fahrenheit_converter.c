 #include <stdio.h>

 float fahr(float cel) {
     return (cel * 9. / 5.) + 32;
 };

 float celsius(float fahr) {
     return (fahr - 32) * (5. / 9);
 };

 int main()
 {
     float cel, f;    // градусы Цельсия и Фаренгейта
     float cel2farh, fahr2cel;

     printf("C = ");
     scanf("%f", &cel);

     printf("F = ");
     scanf("%f", &f);

     cel2farh = fahr(cel);
     fahr2cel = celsius(f);
     printf("C -> F: %.2f\n", cel2farh);
     printf("F -> C: %.2f\n", fahr2cel);

     return 0;
 }
