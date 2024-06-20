#include <stdio.h>

#define MAX 47

int fib(int n);

int main() {
   char ord[3];
   int i;

   ord[3] = '\0';

   for (i = 1; i <= MAX; i++) {
      if (i == 1) {
         ord[1] = 's';
         ord[2] = 't';
      } else if (i == 2) {
         ord[1] = 'n';
         ord[2] = 'd';
      } else if (i == 3) {
         ord[1] = 'r';
         ord[2] = 'd';
      } else {
         ord[1] = 't';
         ord[2] = 'h';
      }

      printf("%3d%s Fibonacci number -> %10d\n", i, ord, fib(i));
   }

   return 0;
}

int fib(int n) {
   if (n <= 2) {
      return 1;
   } else {
      return fib(n - 1) + fib(n - 2);
   }
}
