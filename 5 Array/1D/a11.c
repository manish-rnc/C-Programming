// Program to check whether two arrays are equal or not
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
    int b[n];
    printf("Enter the elements in the another array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            f++;
        }
    }
    if(f==n)
    {
        printf("The arrays are equal.\n");
    }
    else
    {
        printf("The arrays are not equal.");
    }
}