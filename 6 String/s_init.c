#include<stdio.h>
int main()
{
    // way to initialize a character array

    char a[]="String";
    char b[5]="size";
    // char c[4]="incorrect";
    char d[5]={'c','o','d','e','\0'};
    printf("%s\n",a);
    printf("%s\n",b);
    printf("%s\n",d);
    printf("\n");
    puts(a);
    puts(b);
    puts(d);
}