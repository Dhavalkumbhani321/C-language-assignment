
#include<stdio.h>//header file//
int main()
{
	float p,r,t,ans;// Write a program to find to simple interest//
	printf("enter the value of p");
	scanf("%f",&p);
	
	printf("enter the value of r");
	scanf("%f",&r);
	
	printf("enter the value of t");
	scanf("%f",&t);
	
	ans=(p*r*t)/100;
	printf("the ans=%f",ans);
	return 0;
	
	
}
