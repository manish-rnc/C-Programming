// Call by reference

#include<stdio.h>
void fnc(int *);
int main()
{
    int x=20;
    int *ptr=&x;
    printf("The value before call is %d\n",x);
    fnc(&x);
    printf("The value after call is %d\n",x);

}
void fnc(int *p)
{
    printf("The value of function before call is %d\n",*p);
    *p=*p + 10;
    printf("The value of function after call is %d\n",*p);
}