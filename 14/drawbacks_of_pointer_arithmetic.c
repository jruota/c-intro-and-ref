#include <stdio.h>

void pointer_subtraction(void);

int main(void) {
   int a[2] = {1234, 2};
   char* pa = (char*)a;
   int* p = (int*)(pa + 1);

   printf("a[0] (address: %p)\t-> %d\n", &a[0], a[0]);
   printf("a[1] (address: %p)\t-> %d\n", &a[1], a[1]);
   printf("value at p (%p)\t-> %d\n", p, *p);

   putchar('\n');

   pointer_subtraction();

   return 0;
}

void pointer_subtraction(void) {
   int array[5] = {45, 29, 104, -3, 123456};

   int* p3 = &array[3];  // fourth element
   int* p1 = &array[1];  // second element

   printf("(p3 - p1) = %ld\n", p3 - p1);
   printf("(p3 - p1) + p1 = %p\n", (p3 - p1) + p1);

   return;
}
