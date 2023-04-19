// WAP to find sum and average of two numbers using pointers

#include<stdio.h>
int main()
{
    int x,y;
    int *ptr1=&x;
    int *ptr2=&y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("The sum of the two numbers is: %d\n",*ptr1 + *ptr2);
    printf("The average of the two numbers is: %d\n",(*ptr1 + *ptr2)/2);
}