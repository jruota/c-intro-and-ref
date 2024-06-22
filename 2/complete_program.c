#include <stdio.h>

int fib(int n) {
   if (n <= 2)
      return 1;
   else
      return fib(n - 1) + fib(n - 2);
}

int main(void) {
   printf("Fibonacci series item %d is %d\n", 20, fib(20));

   return 0;
}
