// Program to insert an element in the array
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
    printf("Enter the index where you want to insert: ");
    int pos;
    scanf("%d",&pos);
    printf("Enter the value you want to enter: ");
    int x;
    scanf("%d",&x);
    for(i=0;i<n-pos;i++)
    {
        a[n-i]=a[n-1-i];
    }
    a[pos]=x;
    for(i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
}