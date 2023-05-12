#include <stdio.h>
int main() 
{
    int i, num, maximum, minimum;
    printf("Enter 10 numbers:\n");
    //enter the first number
    scanf("%d", &num);
    // assume it is both the maximum and minimum
    maximum = num;
    minimum = num;
   // take the rest of the numbers as input
    for ( i = 1; i < 10; i++) 
    {
        scanf("%d", &num);
        if (num > maximum) 
        {
            maximum = num;
        }
        if (num < minimum) {
            minimum = num;
        }
    }
    printf("The maximum number is: %d\n", maximum);
    printf("The minimum number is: %d\n", minimum);
    return 0;
}