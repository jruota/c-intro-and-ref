#include <stdio.h>

int main(void) {
   int si;
   unsigned ui;

   si = ui = 255;
   puts("Current value of all variables -> \t255");
   printf("Signed integer -> \t\t\t%d\n", si);
   printf("Unsigned integer -> \t\t\t%u\n", ui);

   puts("");

   si = ui = -255;
   puts("Current value of all variables -> \t-255");
   printf("Signed integer -> \t\t\t%d\n", si);
   printf("Unsigned integer -> \t\t\t%u\n", ui);

   putchar('\n');

   char sc;
   signed char uc;

   sc = uc = 127;
   puts("Current value of all variables -> \t127");
   printf("Signed char -> \t\t\t\t%d\n", sc);
   printf("Signed char -> \t\t\t\t%c\n", sc);
   printf("Unsigned char -> \t\t\t%u\n", uc);
   printf("Unsigned char -> \t\t\t%c\n", uc);

   putchar('\n');

   sc = uc = -127;
   puts("Current value of all variables -> \t-127");
   printf("Signed char -> \t\t\t\t%d\n", sc);
   printf("Signed char -> \t\t\t\t%c\n", sc);
   printf("Unsigned char -> \t\t\t%u\n", uc);
   printf("Unsigned char -> \t\t\t%c\n", uc);

   return 0;
}
