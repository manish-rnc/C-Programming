// Program to swap two values using pointer

#include<stdio.h>
int main()
{
    int a,b,temp;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("After swaping the values a=%d and b=%d",*p,*q);
}