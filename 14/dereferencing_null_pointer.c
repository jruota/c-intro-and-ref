#include <stddef.h>

int main(void) {
   volatile char *foo = NULL;

   volatile char c = *foo;

   return 0;
}
