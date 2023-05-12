#include <stdio.h>//Library file

int main() 
{
    int num=0,first=10,last=10,sum=0;//Write a program make a summation of first and last digit numbers
    printf("enter the number");
    scanf("%d",&num);
    last=num%10;
    while(num>10)
    {
        num=num/10;
    }
    first=num;
    sum=first+last;
    printf("the sum of first %d & last %d =%d",first,last,sum);
    return 0;
}