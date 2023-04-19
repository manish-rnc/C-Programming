// Program to copy one string to another
#include<stdio.h>
int main()
{
    char p[20],q[10];
    printf("Enter a string: ");
    scanf("%[^\n]",p);
    printf("The entered string is: %s\n",p);
    int n;
    printf("Enter the number of character to copy: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        q[i]=p[i];
    }
    printf("The copied string is: %s\n",q);
}