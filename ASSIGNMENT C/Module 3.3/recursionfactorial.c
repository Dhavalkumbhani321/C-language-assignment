#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter a number of integer: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));//Write a program to find the factorial using recursion//
    return 0;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}