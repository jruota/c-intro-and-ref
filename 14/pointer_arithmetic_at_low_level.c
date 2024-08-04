#include <stdint.h>
#include <stdio.h>

void *ptr_add(void *, int, int);

int main(void) {
   int i = 4;
   int *iptr = &i;

   int *new_iptr = ptr_add(iptr, 1, sizeof(int));
   printf("old address: %p\n", iptr);
   printf("new address: %p\n", new_iptr);

   putchar('\n');
   puts("manually caclulating old address");
   printf("old address: %p\n", new_iptr - 1);

   return 0;
}

void *ptr_add(void *p, int i, int objsize) {
   /* intptr_t p_address = (long)p; */
   // intptr_t p_address = p; /* implicitly casts the pointer to an integer */
   intptr_t p_address = (long long)p;
   intptr_t totalsize = i * objsize;
   intptr_t new_address = p_address + totalsize;

   /* return (void *)new_address; */
   return new_address; /* implicitly casts the integer to a pointer */
}
