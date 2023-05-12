#include <stdio.h>//library file//
int main() 
{
    int num, even_count = 0, odd_count = 0;//write a program to how many even and odd number are there//
    char choice;
    do 
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 2 == 0) 
        {
            even_count++;
        } else {
            odd_count++;
        }
        printf("Do you want to enter another number? (y/n) ");
        scanf(" %c", &choice);
    } 
    while (choice == 'y' || choice == 'Y');
    printf("\nThe total even numbers are: %d\n", even_count);
    printf("The total odd numbers are: %d\n", odd_count);
    return 0;
}