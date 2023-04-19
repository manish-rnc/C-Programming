// Program to change lowercase to uppercase and vice-versa

#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    printf("Enter a string: ");
    scanf("%[^\n]",&a);
    printf("The entered string is: %s\n",a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else
        {
            a[i]=a[i]-32;
        }
    }
    printf("The converted string is: %s\n",a);
}