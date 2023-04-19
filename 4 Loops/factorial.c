#include<stdio.h>

int main()
{
    int x,fac,z;
    printf("Enter a number\n");
    scanf("%d",&x);
    fac=x;
    z=x;
    x--;
    while (x>0)
    {
        fac=fac*x;
        x--;
    }
    printf("The factorial of %d is %d\n",z,fac);
    return 0;
}