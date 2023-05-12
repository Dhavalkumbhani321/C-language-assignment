#include<stdio.h>
int main()
{
	float base,height,area;//use the formula the base and height formula in this program//
	printf("enter the base");
	scanf("%f",&base);
	printf("enter the height");
	scanf("%f",&height);
	area=(height*base)/2;
	printf("area of triangle is: %f\n",area);
	return 0;
}
