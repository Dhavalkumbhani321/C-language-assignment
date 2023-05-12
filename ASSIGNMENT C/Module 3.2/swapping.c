#include <stdio.h>//Library file
int main()
{
    int n1, n2;
    printf("Enter two numbers: ");//Write a program to using two numbers without using third variables
    scanf("%d %d", &n1, &n2);
    n1 = n1+ n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
   printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
   return 0;
}

