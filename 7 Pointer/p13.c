// WAP change the case of each character of a string using pointer.
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
        if(*(ptr + i)>=65 && *(ptr +i)<=90)
        {
            *(ptr+i)=*(ptr+i) + 32;
        }
        else if(*(ptr + i)>=97 && *(ptr +i)<=122)
        {
            *(ptr+i)=*(ptr+i) - 32;
        }
    }
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c",*(ptr + i));
    }
}