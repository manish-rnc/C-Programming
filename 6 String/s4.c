// Program to replace a character by another character in a string

#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],rep,new;
    printf("Enter a string: ");
    scanf("%[^\n]",&a);
    printf("The entered string is: %s\n",a);
    printf("Enter the character to replace: " );
    scanf(" %c",&rep);
    printf("Enter the character to place: " );
    scanf(" %c",&new);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==rep)
        a[i]=new;
    }
    printf("The new string is: %s",a);
}