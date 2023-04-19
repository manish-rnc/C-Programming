// Program to sort an array in ascending order
#include<stdio.h>
int main()
{
    int a[100],push,n,i,j,m;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j+1]<a[j])
            {
                push=a[j];
                a[j]=a[j+1];
                a[j+1]=push;
            }
        }
        n--;
    }
    printf("The sorted array is:\n");
    for(i=0;i<m;i++)
    {
        printf("%d  ",a[i]);
    }
}