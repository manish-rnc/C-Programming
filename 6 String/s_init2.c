#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    // printf("Enter a string: ");
    // scanf("%s",&a);
    // printf("Entered string is: %s",a);     // will only print the first word

    printf("Enter a string: ");
    scanf("%[^\n]",&a);
    printf("Entered string is: %s",a);

    printf("Enter a string: ");
    gets(a);
    printf("Entered string is: ");
    puts(a);

    // printf("Enter a string: ");
    // fgets(a);
    // printf("Entered string is: ");
    // puts(a);
}