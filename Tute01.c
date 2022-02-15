/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float avg,a,b;
  printf("Enter Mark 1:");
  scanf("%f",&a);
  printf("Enter Mark 2:");
  scanf("%f",&b);
  avg=(a+b)/2;
  printf("Average=%.1f",avg);
  return 0;
}

