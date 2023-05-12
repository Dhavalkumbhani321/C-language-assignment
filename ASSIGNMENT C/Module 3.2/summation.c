#include <stdio.h>//Library file
int main()
{
   int n, t, sum = 0, summation;

   printf("Enter the numbers\n");//Write a program to make a summation of given numbers//
   scanf("%d", &n);
   t = n;
  while (t != 0)
   {
      summation = t % 10;
      sum = sum + summation;
      t = t / 10;
   }
    printf("Sum of digits of %d = %d\n", n, sum);
    return 0;
}