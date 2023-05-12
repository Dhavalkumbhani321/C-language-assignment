#include<stdio.h>// Write a program to area of rectangle//
int main()
{
	float length,width,area;
	
	printf("enter the length of rectangle\n");
	scanf("%f", &length);
	printf("enter the width of rectangle\n");//use the formula of rectangle in this program//
	scanf("%f", &width);
	
	
	area=length*width;
	
	printf("area of rectangle is %f\n", area);
	return 0;
	
}
