#include <stdio.h>

#define MAX 261870

int fill_stack(int n);

int main() {
   printf("Filling the stack with %d call", MAX);
   printf(MAX == 1 ? "" : "s");
   fill_stack(MAX);
   puts(" -> OK");

   return 0;
}

int fill_stack(int n) {
   if (n <= 1)
      return 1;
   else
      return fill_stack(n - 1);
}
