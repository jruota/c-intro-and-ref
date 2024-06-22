#include <stdio.h>

double average_of_three(double a, double b, double c) {
   return (a + b + c) / 3;
}

int main(void) {
   printf("Average is %f\n", average_of_three(1.1, 9.8, 3.62));
   return 0;
}
