#include<stdio.h>// Write a program to make a simple calculator//
int main()
{
	int a,b,ch;
	printf("1.addition\n 2.substraction\n 3.multiplication\n 4.divison\n 5.modulo\n ");// use the switch statements and make a calaculator//
	printf("enter the value:");
	scanf("%d",&a);
	printf("enter the value:");
	scanf("%d",&b);
	printf("enter the choice:");
	scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:
	    	printf("addition:%d",a+b);
	    	break;
	    	
	    	case 2:
	    	printf("substraction:%d",a-b);
	    	break;
	    		
	    		
	    	case 3:
	    	printf("multiplication:%d",a*b);
	    	break;
	    	
	    	case 4:
	    	printf("divison:%d",a/b);
	    	break;
	    	
	    	case 5:
	    	printf("modulo:%d",a%b);
	    	break;
	    	
	        default:
		    printf("invalid numbers");
		    break;

		}
	return 0;
}
