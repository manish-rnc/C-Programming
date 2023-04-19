// Program to implement strcat()

#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    char b[10];
    printf("Enter 1st string: ");
    scanf("%s",a);
    int l=strlen(a);
    printf("Enter 2nd string: ");
    scanf("%s",b);
    for(int i=0;i<strlen(b);i++)
    {
        a[l+i]=b[i];   //using strlen here will not work because strlen value will increase after each iteration
    }
    printf("%s",a);
}