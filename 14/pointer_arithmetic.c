#include <stdio.h>

int array[5] = {45, 29, 104, -3, 123456};

void decrementing_pointers(void);
void incrementing_pointers(void);
void subtracting_pointers(void);

int main(void) {
   incrementing_pointers();
   decrementing_pointers();
   subtracting_pointers();

   return 0;
}

void decrementing_pointers(void) {
   int elt0, elt3, elt4;

   int *p = &array[4];
   /* Now p points at element 4 (the last). Fetch it. */
   elt4 = *p;

   --p;
   /* Now p points at element 3. Fetcht it. */
   elt3 = *p;

   p -= 3;
   /* Now p points at element 0. Fetch it. */
   elt0 = *p;

   /* Prints elt0 45  elt3 -3  elt4 123456. */
   printf("elt0 %d  elt3 %d  elt4 %d.\n", elt0, elt3, elt4);

   return;
}

void incrementing_pointers(void) {
   int elt0, elt1, elt4;

   int *p = &array[0];
   /* Now p points at element 0. Fetch it. */
   elt0 = *p;

   ++p;
   /* Now p points at element 1. Fetch it. */
   elt1 = *p;

   p += 3;
   /* Now p points at element 4 (the last). Fetch it. */
   elt4 = *p;

   /* Prints elt0 45  elt1 29  elt4 123456 */
   printf("elt0 %d  elt1 %d  elt4 %d.\n", elt0, elt1, elt4);

   return;
};

void subtracting_pointers(void) {
   int *p0, *p3, *p4;

   int *p = &array[4];
   /* Now p points at element 4 (the last). Save the value. */
   p4 = p;

   --p;
   /* Now p points at element 3. Save the value. */
   p3 = p;

   p -= 3;
   /* Now p points at element 0. Save the value. */
   p0 = p;

   printf("%ld, %ld, %ld, %ld\n", p4 - p0, p0 - p0, p3 - p0, p0 - p3);

   return;
}
