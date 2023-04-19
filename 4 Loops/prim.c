#include<stdio.h>
int main()
{
    int x,i,p=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(i=2;i<=x/2;i++)
    {
        if(x%i!=0)
        {
            p=1;
            break;
        }
    }
    if(x==1 || x==0)
    {
        printf("Neither prime nor composite\n");
    }
    // else if(p==0)
    // {
    //     printf("%d is a prime number\n",x);
    // }
    // else
    // {
    //     printf("%d is not a prime number\n",x);
    // }
    else {
if (p == 0)
printf("%d is a prime number.", x);
else
printf("%d is not a prime number.", x);
    }
}