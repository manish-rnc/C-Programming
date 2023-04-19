//Program to dynamically allocate the array of n integers

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n;
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
    free(p);
}