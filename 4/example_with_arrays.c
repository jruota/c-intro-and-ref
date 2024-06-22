#include <stdio.h>

double avg_of_double(int length, double input_data[]) {
   double sum = 0;
   int i;

   for (i = 0; i < length; i++) {
      sum = sum + input_data[i];
   }

   return sum / length;
}

int main(void) {
   double nums_to_average[5] = {58.7, 5.1, 7.7, 105.2, -3.14159};

   double average;

   /*  nums_to_average[0] = 58.7;
    nums_to_average[1] = 5.1;
    nums_to_average[2] = 7.7;
    nums_to_average[3] = 105.2;
    nums_to_average[4] = -3.14159; */

   average = avg_of_double(sizeof(nums_to_average) / sizeof(nums_to_average[0]),
                           nums_to_average);

   puts("The average of the numbers");
   for (int i = 0; i < sizeof(nums_to_average) / sizeof(nums_to_average[0]);
        i++) {
      printf("\t%.3f\n", nums_to_average[i]);
   }
   printf("is %.3f.\n", average);

   return 0;
}
