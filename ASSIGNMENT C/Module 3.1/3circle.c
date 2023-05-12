#include<stdio.h>// Write a program to find area of circle//
int main()
{
	
	float r,pi=3.14,area;//use the circle formula//
	printf("\nEnter the value of the circle");
	scanf("%f",&r);
	area=pi*r*r;
	printf("\nArea of the circle=%f",area);
	return 0;
}
