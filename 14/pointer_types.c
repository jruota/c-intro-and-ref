#include <stdio.h>

int main(void) {
   double a[5];

   double(*pointer_to_arrays_of_five_doubles)[5] = &a;
   double *pointer_to_element_0_of_a = &a[0];

   printf("Pointer to arrays of five double '&a'\t-> %p\n",
          pointer_to_arrays_of_five_doubles);
   printf("Pointer to element 0 of a '&a[0]'\t-> %p\n",
          pointer_to_element_0_of_a);

   return 0;
}
