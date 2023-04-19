// WAP to find sum and average of the elements present in the array using pointer
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    int *ptr=a;
    printf("Enter the contents of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    for(int i=0;i<n;i++)
    {
        sum=sum + *(ptr + i);
    }
    printf("\nThe sum is %d ",sum);
    printf("\nThe average is %d ",sum/n);
}