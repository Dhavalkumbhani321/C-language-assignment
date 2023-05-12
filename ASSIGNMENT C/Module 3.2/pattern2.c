#include <stdio.h>//library file
int main()
{
    int i,j;
    char ch='A';
    for(i=1;i<=5;i++)//write a program to make a ABCD pattern in c
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }
    return 0;
}