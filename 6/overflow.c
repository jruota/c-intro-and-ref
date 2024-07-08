#include <math.h>
#include <stdio.h>

int main(void) {

   /* Unsigned arithmetic in C ignores overflow; it produces the true result
      modulo the nth power of 2, where n is the number of bits in the data type.
      We say it “truncates” the true result to the lowest n bits.

      A true result that is negative, when taken modulo the nth power of 2,
      yields a positive number.*/

   /* For signed integers, the result of overflow in C is in principle
      undefined, meaning that anything whatsoever could happen. Therefore, C
      compilers can do optimizations that treat the overflow case with total
      unconcern. */

   double x = pow(2, 32) - 1;

   printf("signed x\t-> %d\n", (int)x);             // −2,147,483,648
   printf("unsigned x\t-> %u\n", (unsigned int)x);  // 4,294,967,295
   putchar('\n');

   x++;
   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   x++;
   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   puts("");

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   x = pow(2, 32) - 1;

   printf("signed x\t-> %d\n", (int)x);             // −2,147,483,648
   printf("unsigned x\t-> %u\n", (unsigned int)x);  // 4,294,967,295
   putchar('\n');

   x--;
   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   x--;
   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   puts("");

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   x = 0;

   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   x--;
   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   x--;
   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   puts("");

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   x = 0;

   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   x++;
   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   x++;
   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   puts("");

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   x = pow(2, 31) - 1;

   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   x++;
   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   x++;
   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   puts("");

   // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

   x = pow(2, 31) - 1;

   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   x--;
   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   x--;
   printf("signed x\t-> %d\n", (int)x);
   printf("unsigned x\t-> %u\n", (unsigned int)x);
   putchar('\n');

   return 0;
}
