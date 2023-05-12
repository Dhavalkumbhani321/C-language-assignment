#include<stdio.h>
int main()
{
  int i,j,k;
  k=1;
  for(i=1;i<6;i++)// Write a program to make a 1234 patter using for loop
  {
    for(j=1; j<=i;j++)
    {
      printf("%d",k++);
    }
    printf("\n");
  }
  return 0;
}