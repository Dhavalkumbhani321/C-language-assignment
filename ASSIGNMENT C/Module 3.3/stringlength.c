#include <stdio.h>
#include <string.h>//Library file//
int main() 
{
    char string[20];
    int length = 0;
    printf("Enter a string: ");// Loop to count characters in the string
    scanf("%[^\n]", string);
   
    while (string[length] != '\0')
    {
        length++;
    }
    printf("The Length of the string: %d\n", length);
    return 0;
}