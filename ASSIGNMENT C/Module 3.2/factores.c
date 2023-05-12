#include <stdio.h>//Library file//
int main() 
{
    int num, i,factorial = 1;

    printf("Enter a number: ");//Write a program to print factorial of given number//
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
	 {
        factorial *= i;
    }
    printf("Factorial of %d = %d\n", num, factorial);
    return 0;
}