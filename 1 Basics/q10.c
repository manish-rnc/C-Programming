#include<stdio.h>
#include<math.h>

int main()
{
    float p,r,t,n;
    float a,b;
    printf("Enter the principal amount\n");
    scanf("%f",&p);
    printf("Enter rate of interest\n");
    scanf("%f",&r);
    printf("Enter time period\n");
    scanf("%f",&t);
    printf("Enter no of time interest applied per year\n");
    scanf("%f",&n);
    a=(1+r/(n*100));
    b=(n*t);
    float amt=p*pow(a,b);
    printf("The value of compound interest is %.2f",amt-p);
    return 0;
}