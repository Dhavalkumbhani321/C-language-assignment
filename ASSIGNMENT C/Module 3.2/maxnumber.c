#include <stdio.h>
  int main() 
   {
    int a[10],i,maximum;
    printf("Enter the values:");
    //Store 10 numbers in an array
    for (i = 0; i < 5; i++)
     {
        scanf("%d", &a[i]);
    }
    //Assume that a[0] is maximum
    maximum = a[0];
    for (i = 0; i < 5; i++) 
    {
        if (a[i] > maximum)
         {
        maximum = a[i];
    }
    }
    printf("The maximum number is: %d", maximum);
    return 0;
  }