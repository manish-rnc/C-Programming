// Program to find the sum of the elements of the array
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum of the elements of the array is %d ",sum);
}