#include <stdio.h>//library file

int main() 
{
    int num;
    printf("Enter the numbers: ");//wrie a program to find the odd and even number using ternary operator
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is even.", num) : printf("%d is odd.", num);
    return 0;
}