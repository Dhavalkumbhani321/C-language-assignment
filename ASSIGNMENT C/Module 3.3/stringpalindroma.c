#include <stdio.h>
#include <string.h>//Library file//
int main() 
{
    char str[100], reverse[100];
    int len, i, j, flag = 1;
    printf("Enter a string: ");//Write a program to reverse a string and check that the string is palindrone  or not//
    scanf("%s", &str);
    len = strlen(str);
    for (i = 0, j = len - 1; i < len; i++, j--)
     {
        reverse[i] = str[j];
    }
    reverse[i] = '\0'; 
    printf("The reversed string is: %s\n", reverse);
    for (i = 0; i < len; i++) 
    {
        if (str[i] != reverse[i]) 
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1) 
    {
        printf("The string is a palindrome.\n");
    } else 
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}