// Program to delete an element of the array at a given index using other array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the index where you want to delete: ");
    int j;
    scanf("%d",&j);
    int b[n-j];
    for(int i=0;i<n-j;i++)
    {
        b[i]=a[j+i+1];
    }
    int c[n-1];
    for(int i=0;i<j;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<n-j;i++)
    {
        c[j+i]=b[i];
    }
    printf("The array after deleting the element:\n");
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",c[i]);
    }
}