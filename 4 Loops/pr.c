#include<stdio.h>
int main()
{
    int x,i,p=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            p++;
        }
    }
    if(x==0 || x==1)
    {
        printf("NENO");
    }
    else if(p==x-2)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
}