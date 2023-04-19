#include<stdio.h>

int main()
{
    char cha;
    int x;
    printf("Enter an uppercase character\n");
    scanf("%c",&cha);
    x=cha+32;
    printf("The lowercase character is %c\n",x);
    printf("The ascii value of this character is %d",x);
    return 0;
}