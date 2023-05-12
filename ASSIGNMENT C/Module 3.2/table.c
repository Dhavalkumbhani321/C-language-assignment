#include<stdio.h>//Library file
int main()
{
	int num,i;
	printf("enter the number show the table");//create program in c and print table up to given number
	scanf("%d",&num);
	for(i=1;i<=10;i++)
    	{
		printf("%d * %d = %d\n",i,num,i*num );
		}	
		return 0;
}
