// Program to copy elements of an array to another array
#include<stdio.h>
int main()
{
    int n,b[40];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("The elements of the first array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe elements copied in other array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}