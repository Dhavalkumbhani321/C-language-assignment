#include <stdio.h>
int main() 
{
    int num, max = 0;
    char choice;
    do 
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > max) 
        {
            max = num;
        }
        printf("Do you want to enter another number? (y/n) ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
     printf("\nMaximum number entered: %d\n", max);
    return 0;
}