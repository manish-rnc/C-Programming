// Program to check whether the array is symmetric or not
#include<stdio.h>
int main()
{
    int f=0,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        if(a[i]==a[n-1-i])
        {
            f++;
        }
    }
    if(f==n/2)
    {
        printf("The array is symmetric\n");
    }
    else
    {
        printf("The array is not symmetric\n");
    }
}