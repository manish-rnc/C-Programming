
#include<stdio.h>
#include<math.h>
int main()
{
    int x,p,q,r,sum,a,b,c;
    printf("Enter a number\n");
    scanf("%d",&x);
    p=x/100;
    q=(x%100)/10;
    r=x%10;
    sum=pow(p,3)+pow(q,3)+pow(r,3);
    a=sum/100;
    b=(sum%100)/10;
    c=sum%10;
    if(p==a)
    {
        if(q==b)
        {
            if(r==c)
            {
                printf("This is an armstrong number\n");
            }
            else
            {
                printf("This is not an armstrong number\n");
            }
        }
        else
        {
             printf("This is not an armstrong number\n");
        }
    }
    else
    {
         printf("This is not an armstrong number\n");
    }
    return 0;
}