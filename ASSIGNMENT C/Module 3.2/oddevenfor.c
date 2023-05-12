#include<stdio.h>
int main ()
{
	int num,i,j;
	printf("enter the numbers odd:");
	scanf("%d",&num);
	printf("----------odd number are--------");//odd:-1,3,5,7 and even: 2,4,6,8//
	for(i=1;i<=100;i=i+2)
	{
		printf("%d\n",i);
	}
	
	printf("enter the number even");
	scanf("%d",&num);
	printf("-------------even number are---------");//print the odd or even numbers using for loop in this program//
	for(j=1;j<=100;j++)
	if(j%2==0)
	{
		printf("%d\n",j);
	}
	
	    return 0;
	    
}
