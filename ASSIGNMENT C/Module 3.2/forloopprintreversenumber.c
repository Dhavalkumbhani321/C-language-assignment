#include <stdio.h>//library  file

int main()
 {
    int i,num,sum= 0;

    printf("Enter a number: ");//write a program print the number in reverse order
    scanf("%d", &num);
    while (num != 0) 
	    {
         i= num % 10;
        sum = sum * 10 + i;
        num /= 10;
        }
       printf("The number in reverse order is: %d", sum);
       return 0;
}

    
	  

