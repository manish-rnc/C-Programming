// Program to reverse a string

#include<stdio.h>
#include<string.h>
int main()
{
    int temp;
    char a[20];
    printf("Enter a string: ");
    scanf("%[^\n]",&a);
    printf("The entered string is: %s\n",a);
    for(int i=0 ; i<strlen(a)/2 ; i++)
    {
        temp=a[i];
        a[i]=a[strlen(a)-1-i];
        a[strlen(a)-1-i]=temp;
    }
    printf("The reversed string is: %s",a);
}

// WRONG WAY TO REVERSE A STRING
// int main()
// {
//     int temp,i;
//     char a[20];
//     printf("Enter a string: ");
//     scanf("%[^\n]",&a);
//     printf("The entered string is: %s\n",a);
//     printf("The reversed string is: ");
//     for(i=strlen(a) ; i>=0 ; i--)
//     {
//         printf("%c",a[i]);
//     }
// }