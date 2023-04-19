#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    // printf("%d  %x\n",a,p);

    int num=90;
    int *r=&num;
    printf("The value of the number is %d\n",num);
    printf("The value of the number is %d\n",*r);       //de-referencing
    printf("The address of the number is %u\n",r);
    printf("The address of the number is %u\n",&num);
}