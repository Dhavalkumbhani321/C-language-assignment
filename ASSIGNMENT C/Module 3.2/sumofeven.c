#include <stdio.h>//library file
int main()
 {
    int i, n, sum = 0;

    printf("Enter the numbers");//w.a.p. to sum of even numbers and print the table
    scanf("%d", &n);
    printf("The even numbers:\n");
    for ( i = 2; i <= n; i++)
     {
        if (i % 2 == 0)
         {
            printf("%d ", i);
            sum += i;
         }
     }
        printf("\nSum of even numbers up to %d is %d\n", n, sum);

    return 0;
}