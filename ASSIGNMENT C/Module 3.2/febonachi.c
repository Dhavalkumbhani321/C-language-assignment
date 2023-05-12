#include <stdio.h>//Library file//
int main() 
{
    int num, i, t1 = 0, t2 = 1, nextTerm;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci series up to %d: ", num);//write a program to print fibonacci series up to given numbers//
    for (i = 1; t1 <= num; i++) 
	{
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
       return 0;
}