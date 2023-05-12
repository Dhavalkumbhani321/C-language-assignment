#include <stdio.h>//library file

int main()
 {
    int i, n, sum = 0;
    printf("Enter a positive integer: ");//Write a program to sum of odd numbers and print the table
    scanf("%d", &n);
    printf("Table of odd numbers:\n");
    for ( i = 1; i <= n; i++) 
    {
        if (i % 2 != 0) 
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nSum of odd numbers up to %d is %d\n", n, sum);
    return 0;
}