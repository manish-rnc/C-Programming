// Program to merge two arrays and then print the merged array
#include<stdio.h>
int main()
{
    int a[100],b[100],c[200],n,m,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of the other array: ");
    scanf("%d",&m);
    printf("Enter the elements of the array\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int x=m+n;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<m;i++)
    {
        c[n+i]=b[i];
    }
    printf("The array after merging is: ");
    for(i=0;i<x;i++)
    {
        printf("%d ",c[i]);
    }
}