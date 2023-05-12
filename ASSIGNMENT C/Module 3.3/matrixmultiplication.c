#include<stdio.h>//Library file
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    printf("enter the elements of matrix 1\n");//Write a program to multiplication of two matrix using 2-D array//
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter the elements of matrix 2\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
        for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }    
    printf("------1st matrix------\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",a[i][j]);
        }
		    printf("\n");		    		    
    }
    printf("------2nd matrix------\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           printf("%d  ",b[i][j]);
        }
		   printf("\n");
    }
    printf("------Result: Multiplication Matrix------\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",c[i][j]);
        }printf("\n");
    }
}
