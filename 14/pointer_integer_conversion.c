#include <stdint.h>
#include <stdio.h>

void print_pointer(void *);

int main(void) {
   int i = 42;
   int *ptr = &i;

   puts("DEBUG: in 'main'");
   printf("pointer 'ptr' -> %p\n", ptr);
   print_pointer(ptr);
   puts("DEBUG: leaving 'main'");

   return 0;
}

void print_pointer(void *ptr) {
   uintptr_t converted = (uintptr_t)ptr;

   puts("DEBUG: in 'print_pointer'");
   /*
   The conversion is needed here, because the format specifier 'x' expects an
   unsigned integer. This incurs a loss of information, since the pointer value
   (which is a '(long?) long') might not fit into an unsigned integer.
   */
   printf("Pointer value is 0x%x\n", (unsigned int)converted);
   printf("pointer ptr -> %ld\n", converted);
   puts("DEBUG: leaving 'print_pointer'");

   return;
}
