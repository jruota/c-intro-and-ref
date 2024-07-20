#include <stdio.h>

int main(void) {
   int bconst = 0b1010;

   printf("bconst -> %d\n", bconst);
   printf("%d + %d = %d\n", 0b10111, 0b1000001, 0b10111 + 0b1000001);

   return 0;
}
