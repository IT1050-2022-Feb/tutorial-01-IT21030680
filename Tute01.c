/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int num1, num2;
  float average;

  //obtain the first number
  printf("Enter the first number : ");
  scanf("%d",&num1);

  //obtain the second number
  printf("\nEnter the second number : ");
  scanf("%d",&num2);

  //Calculate the average
  average = (num1+num2)/2.0;

  //Display the average
  printf("\nThe average of the two numbers is %.2f. ",average);

  return 0;
}

