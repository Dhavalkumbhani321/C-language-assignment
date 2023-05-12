#include<stdio.h>
void reverse(char s[],int i);

void main(){
    char str[100];
    printf("enter string=");//Write a program to find the reverse of string using recursion//
    scanf("%s",&str);
    printf("revers string is=");
    reverse(str,0);

}
void reverse(char s[], int i){
    if(s[i]=='\0')
    return;
    reverse(s,i+1);
    printf("%c",s[i]);
}