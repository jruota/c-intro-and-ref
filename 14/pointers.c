#include <stdint.h>
#include <stdio.h>

int main(void) {
   int i;
   double a[5];

   printf("address of integer i \t\t\t\t\t %p\n", &i);
   printf("address of the fourth element of double array a \t %p\n", &a[3]);
   printf("address of double array a \t\t\t\t %p\n", &a);
   printf("address of double array a \t\t\t\t %p\n", a);

   putchar('\n');

   int *ptri;         /* Pointer to int. */
   double *ptrd;      /* Pointer to double. */
   double(*ptrda)[5]; /* Pointer to double[5]. */
   double *aptrd[5];  /* Array of five pointers to double. */

   ptrda = &a; /* ptrda = a;
      -> warning: assignment to 'double (*)[5]' from incompatible pointer type
      'double' */

   printf("array 'double a[5] -> %p\n", a);
   printf("pointer to double[5] -> %p\n", ptrda);

   putchar('\n');

   printf("size of int16_t pointer -> %ld\n", sizeof(int16_t *));
   printf("size of int32_t pointer -> %ld\n", sizeof(int32_t *));
   printf("size of int64_t pointer -> %ld\n", sizeof(int64_t *));

   putchar('\n');

   printf("size of a float pointer -> %ld\n", sizeof(float *));
   printf("size of a double pointer -> %ld\n", sizeof(double *));
   printf("size of a long double pointer -> %ld\n", sizeof(long double *));

   return 0;
}
