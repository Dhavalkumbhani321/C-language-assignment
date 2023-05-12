#include <stdio.h>//library file
int main()
 {
    int i,j,n;
    printf("Enter the number of rows: ");//Write a program half diamond pattern in c
    scanf("%d", &n);
    for ( i = 1; i <= n; i++) 
    {
        for ( j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
for ( i = n - 1; i >= 1; i--) 
{
        for ( j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
       return 0;
}