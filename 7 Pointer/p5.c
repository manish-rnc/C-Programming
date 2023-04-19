#include<stdio.h>
int main()
{
    int a[4];
    int *p1;
    int (*p2)[4];

    p1=a;     //points to 0th element of the array
    p2=&a;    //points to the whole array
    printf("p1=%u, p2=%u",p1,p2);
}

//x[1] is equivalent to *(x+1) and &x[1] is equivalent to x+1