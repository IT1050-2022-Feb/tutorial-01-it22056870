/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  float sub1, sub2;

  printf("Enter Subject 1 marks: ");
  scanf("%f", &sub1);

  printf("Enter Subject 2 marks: ");
  scanf("%f", &sub2);

  printf("Average is : %.2f", (sub1 + sub2) / 2.0);

  return 0;
}
