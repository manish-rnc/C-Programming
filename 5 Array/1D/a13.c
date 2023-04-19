// Program to replace a number by a given number
#include<stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to replace: ");
    int num1,num2;
    scanf("%d",&num1);
    printf("Enter the number to place: ");
    scanf("%d",&num2);
    for(int i=0;i<n;i++)
    {
        if(a[i]==num1)
        {
            a[i]=num2;
        }
    }
    printf("The new array after replacing:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}