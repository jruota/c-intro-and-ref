#include <complex.h>
#include <stdio.h>

void print_complex_d(_Complex double);

int main(void) {
   _Complex double foo = 4.0 + 3.0i;
   double foo_real = __real__ foo;
   double foo_imag = __imag__ foo;

   printf("foo -> ");
   print_complex_d(foo);
   putchar('\n');

   printf("foo real -> %.2f\n", creal(foo));
   printf("foo imag -> %.2f\n", cimag(foo));

   printf("foo_real -> %.2f\n", foo_real);
   printf("foo_imag -> %.2f\n", foo_imag);

   return 0;
}

void print_complex_d(_Complex double j) {
   printf("%.2f + %.2fi", creal(j), cimag(j));

   return;
}
