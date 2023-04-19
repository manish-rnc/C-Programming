// Program to implement strncat()
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char a[50];
    char b[50];
    printf("Enter 1st string: ");
    scanf("%s",a);
    printf("Enter 2nd string: ");
    scanf("%s",b);
    int l=strlen(a);
    printf("Enter the no of characters to copy: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a[l+i]=b[i];
    }
    printf("%s",a);
}