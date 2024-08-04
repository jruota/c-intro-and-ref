#include <stdio.h>

int after_last_nonzero(int *, int);
int sum_array_till_0(int *);

int main(void) {
   int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 0, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};

   printf("array address -> %p\n", array);
   int sum = sum_array_till_0(array);
   printf("array address -> %p\n", array);
   printf("sum until first 0 -> %i\n", sum);

   putchar('\n');

   int array2[] = {1, 2, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int length = after_last_nonzero(array2, sizeof(array2) / sizeof(int));
   printf("number of nonzero elements -> %i\n", length);

   return 0;
}

int after_last_nonzero(int *p, int len) {
   // FOR DEBUGGING
   puts("DEBUG INFO: Entering function 'after_last_nonzero'");

   /* Set up q to point just after the last array element. */
   int *q = p + len;

   printf("start of array -> %p\n", p);
   printf("end of array -> %p\n", q);
   printf("length of array -> %i\n", len);

   while (q != p) {
      /* Step q back until it reaches a nonzero element. */
      if (*--q != 0) {

         printf("q - p = %p\n", (int *)(q - p));
         printf("q - p + 1 = %p\n", (int *)(q - p + 1));
         printf("q - p = %ld\n", (q - p));
         printf("q - p + 1 = %ld\n", (q - p + 1));

         // FOR DEBUGGING
         puts("DEBUG INFO: Exiting function 'after_last_nonzero'");

         /* Return the index of the element after that nonzero. */
         return q - p + 1;
      }
   }

   // FOR DEBUGGING
   puts("DEBUG INFO: Exiting function 'after_last_nonzero'");

   return 0;
}

int sum_array_till_0(int *p) {
   int sum = 0;

   for (;;) {
      /* Fetch the next integer */
      int next = *p++;
      /* Exit the loop if it's 0. */
      if (next == 0) {
         break;
      }
      /* Add it into running total */
      sum += next;
   }

   return sum;
}
