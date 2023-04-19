// Program to print the elements at odd index of the array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements at odd index of the array are:\n");
    for(int i=1;i<n;i=i+2)
    {
        printf("%d ",a[i]);
    }
}