#include <stdio.h>// Library file//
void sort_array(int [], int, int);
int main()
{
    int a[100],b[100],size1,size2,choice;
    printf("Enter the size of a: ");
    scanf("%d", &size1);
    printf("Enter the elements of a1\n");//Write a Program to take array input from user and sort them in ascending or descending order as per user//
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of b: ");
    scanf("%d", &size2);

    printf("Enter the elements of b1\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Enter the choice of sorting order (0 for ascending, 1 for descending): ");
    scanf("%d", &choice);

    
    sort_array(a, size1, choice);
    sort_array(b, size2, choice);
    printf("Sorted array a\n");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Sorted array b\n");
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
// define the function defination//
void sort_array(int a1[], int size, int choice)
{
    int i,j,temp;

    // Selection sort algorithm//
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (choice == 0)
            {
                // Sort in ascending order//
                if (a1[i] > a1[j])
                {
                    temp = a1[i];
                    a1[i] = a1[j];
                    a1[j] = temp;
                }
            }
            else
            {
                // Sort in descending order
                if (a1[i] < a1[j])
                {
                    temp = a1[i];
                    a1[i] = a1[j];
                    a1[j] = temp;
                }
            }
        }
    }
}