// Call by value
// No change is reflected if change is there in formal parameter

#include<stdio.h>
void func(int);
int main()
{
    int x=10;
    printf("The value before call is %d\n",x);
    func(x);
    printf("The value after call is %d\n",x);
}
void func(int a)
{
    printf("The value in function before change is %d\n",a);
    a=a+100;
    printf("The value in function after change is %d\n",a);
}