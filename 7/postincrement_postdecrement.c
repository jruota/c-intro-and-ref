#include <stdio.h>

int main(void) {
   int i = 5;

   printf("%d\n", i);
   printf("%d\n", i++);
   printf("%d\n", i);

   putchar('\n');

   i = 5;
   printf("%d\n", i);
   printf("%d\n", i--);
   printf("%d\n", i);

   return 0;
}
