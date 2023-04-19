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
    // printf("p=%d\nq=%d\nr=%d\n",p,q,r);
    sum=pow(p,3)+pow(q,3)+pow(r,3);
    a=sum/100;
    b=(sum%100)/10;
    c=sum%10;
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);
    (p==a)?(q==b)?(r==c)?printf("This is an armstrong number"):printf("This is not an armstrong number"):printf("This is not an armstrong number"):printf("This is not an armstrong number");
    return 0;
}