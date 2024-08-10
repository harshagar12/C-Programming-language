#include <stdio.h>

int main() {
   double num1, num2, average;

   printf("Enter a sequence of non-negative numbers, terminated by -1:\n");

   // Read the first two numbers
   scanf("%lf", &num1);
   scanf("%lf", &num2);

   // Start processing from the third number
   while (scanf("%lf", &average) == 1 && average != -1) {
       // Calculate and print the two moving average
       printf("%.1lf ", (num1 + num2) / 2);

       // Update the numbers for the next iteration
       num1 = num2;
       num2 = average;
   }

   // Print the last moving average (since the loop terminates before printing it)
   printf("%.1lf\n", (num1 + num2) / 2);

   return 0;
}
