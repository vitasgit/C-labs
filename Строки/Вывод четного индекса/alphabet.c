 #include <stdio.h>
 #include <string.h>

 int main(void)
 {
     char str[100];
     fgets(str, sizeof(str), stdin);

     for (int i = 0; i < strlen(str); i += 2) {
         printf("%c\n", str[i]);
     }

     return 0;
 }
