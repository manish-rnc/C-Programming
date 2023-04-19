// Program to sort an array in descending order
#include<stdio.h>
int main()
{
    int a[118],swap,n,i,j;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j+1]>a[j])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}