#include <stdio.h>

int main(void) {
   int x = 4;

   printf("x -> %d\n", x);
   x = x++;
   printf("x -> %d\n", x);

   return 0;
}
