#include <stdio.h>//Library file//
int main()
 {
    int choice, num1, num2, result;//Write a program to addition,substraction,multiplication and divison using switch case//
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter the choice 1 to 4: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) 
    {
        case 1:
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case 4:
            if (num2 == 0) 
            {
                printf("Error: division by zero\n");
            } else 
            {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            }
            break;
        default:
            printf("Invalid number\n");
    }
      return 0;
}