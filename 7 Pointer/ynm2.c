//Program to dynamically allocate the array of n integers and find the sum of the elements present in the array

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    // ptr=(cast type *) malloc (byte-size);
    p=(int *)malloc(n*sizeof(int));    
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("The array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    for(int i=0;i<n;i++)
    {
        sum=sum + *(p+i);
    }
    printf("\nSum=%d",sum);
    free(p);
}