// Pointer arithmetic
#include<stdio.h>
int main()
{
    int a=10 ,*p=&a;
    printf("The address of a is %u ",p);
    p=p+2;
    p=p-1;
    printf("\nThe address is %u ",p);
    //The length increases by the type of data type which is known as scale factor
}