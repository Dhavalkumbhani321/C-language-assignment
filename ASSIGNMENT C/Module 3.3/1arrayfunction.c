#include<stdio.h>//library file//
int max(int []);
int main()
{
    int a[5],i,n;
    printf("enter 5 numbers");//Write a program  to find out maximum number from given array using function//
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    n=max(a);
    printf("\nmaximum = %d",a[i]);
    return 0;
}
int max(int a[])
{
    int i,n;
    for(i=0;i<5;i++)
    {
        if(a[i]>n)
        n=a[i];
    } 
        return 0;
}
