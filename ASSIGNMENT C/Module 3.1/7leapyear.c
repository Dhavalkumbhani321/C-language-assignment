#include<stdio.h>//Write a program to check if the given year is a leap year or not//
int main()
{
	int y;
	printf("enter the leap year");
	scanf("%d",&y);
	
	if(y%4==0)
	{
		printf("this is a leap year");
	}
	else
	{
		printf("this is not leap year");//check the leap year print on the output screen or not//
	}
	return 0;
}
