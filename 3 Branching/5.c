#include<stdio.h>
int main()
{
    float a,b,c,d,m,n,x1,x2;
    printf("Enter the values of a,b,c,d,m,n\n");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&m,&n);
    x1=(m*d-b*n)/(a*d-c*b);
    x2=(n*a-m*c)/(a*d-c*b);
    if (a*d-c*b==0)
    {
        printf("Error!\n");
    }
    else
    {
        printf("The value of x1 is %.2f and the value of x2 is %.2f",x1,x2);
    }
    return 0;
}