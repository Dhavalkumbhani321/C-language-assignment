#include <stdio.h>//library file
int main()
{
    int i, j, N;
    printf("Enter N: ");//write a program 101 pattern in c using for loop
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
           if(j % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
            printf("\n");
    }
      return 0;
}