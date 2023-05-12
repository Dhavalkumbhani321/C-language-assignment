#include <stdio.h>//library file//
int main()
{
    int i, num;
    int sum = 0, max, min;
    float avg;
 // Read the first number to initialize maximum and minimum//
    printf("Enter a number: ");
    scanf("%d", &num);
    max = min = num;
    sum += num;
   // Read the next 9 numbers and update sum, maximum, and minimum//
    for (i = 1; i < 5; i++)
     {
        printf("Enter another number: ");
        scanf("%d", &num);
        sum += num;
        if (num > max)
         {
            max = num;
         }
        if (num < min) 
        {
            min = num;
        }
    }
    // Calculate the average//
    avg = (float) sum / 5;
// Print the results
    printf("Sum: %d\n", sum);
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    printf("Average: %.2f\n", avg);
    return 0;
}