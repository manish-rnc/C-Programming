// Program to insert an element in the array at a given index using other array
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
    printf("Enter the index where you want to insert: ");
    int j;
    scanf("%d",&j);
    printf("Enter the number you want to insert: ");
    int x;
    scanf("%d",&x);
    int b[n-j];
    for(int i=0;i<n-j;i++)
    {
        b[i]=a[j+i];
    }
    int c[n+1];
    for(int i=0;i<j;i++)
    {
        c[i]=a[i];
    }
    c[j]=x;
    for(int i=0;i<n-j;i++)
    {
        c[j+1+i]=b[i];
    }
    printf("The array after inserting the element:\n");
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",c[i]);
    }
}