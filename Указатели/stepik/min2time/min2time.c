 #include <stdio.h>

 void min2time(int mm, int * ph, int * pm)
 {
     *ph = (mm / 60) % 24;
     *pm = mm % 60;
 }

 int main()
 {
     int mm, hh;
     scanf("%d", &mm);

     min2time(mm, &hh, &mm);
     printf("%02d:%02d\n", hh, mm);

     return 0;
 }
