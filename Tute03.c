/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n,sum=0;

  //obtain n
  printf("Enter number : ");
  scanf("%d",&n);

  //calculate the sum of numbers from 1-n
  while(n>=1){
    sum = sum + n;
    n=n-1;
  }

  //display sum
  printf("\nThe sum is equal to %d",sum);

  return 0;
}

