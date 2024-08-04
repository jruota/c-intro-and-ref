#include <stdio.h>

int main(void) {
   int i;
   int *p, *q;

   p = &i;
   // q = &i;
   q = NULL;

   if (p == q) {
      puts("This will be printed.");
   }
   if (p != q) {
      puts("This will not be printed.");
   }

   return 0;
}
