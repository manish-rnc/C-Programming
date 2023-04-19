// Program to print the largest element in the array
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
    for(int i=0;i<n;i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
    printf("The largest element of the array is %d",a[0]);   
}