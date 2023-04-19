// Program to dynamically allocate a string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int *p,n,i;
    p=(char *)malloc(n*sizeof(char));
    printf("Enter a string: ");
    gets(p);
    n=strlen(p);
    printf("The entered string is: %s",p);
}