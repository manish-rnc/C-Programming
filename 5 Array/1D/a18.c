// Program to delete an element from the array
#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the contents of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the index where you want to delete: ");
    int pos;
    scanf("%d",&pos);
    for(i=0;i<n-pos;i++)
    {
        a[pos+i]=a[pos+i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
}