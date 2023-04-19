// WAP to take input and display a string using pointer.
#include<stdio.h>
int main()
{

    int n,i;
    char s[93];
    char *ptr=s;
    printf("Enter a string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c",*(ptr + i));
    }
}