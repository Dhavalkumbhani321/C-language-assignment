#include<stdio.h>//library file//
int main()
{
	int num;// w.a.p. of convert years into days and days into years//
	float ans,i;
	 printf("press 1 for convert year in to days\npress 2 for convert days in to year\n");
	 scanf("%d",&num);
	 
	 if (num==1)
	 {
	 	printf("enter the numbr of year: \n");
	 	scanf("%f",&i);
	 	
	 	ans=i*365;
	 	printf("%fyear=%fdays",ans);
	 }
	 else if(num==2)
	 {
	 	printf("enter the number of days\n");
	 	scanf("%f",&i);
	 	
	 	ans=i/365;
	 	printf("%f",ans);
	 }
	 
	 return 0;
}
