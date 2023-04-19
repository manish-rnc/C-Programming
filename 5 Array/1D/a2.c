// Program to print the elements of the array in reverse order
#include<stdio.h>
int main()
{
    int n,temp;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array in the reverse order is:\n");
    for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    // WRONG WAY TO REVERSE AN ARRAY
    // for(int i=n-1;i>=0;i--)
    // {
    //     printf("%d ",a[i]);
    // }
}