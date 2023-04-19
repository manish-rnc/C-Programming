// Program to dynamically allocate the array of n integers and search an element in the array
 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,f=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("The entered array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\nEnter the element to search for: ");
    int y;
    scanf("%d",&y);
    for(i=0;i<n;i++)
    {
        if(*(p+i)==y)
        {
            printf("The element %d is found at %d",*(p+i),i);
            f=1;
        }
    }
    if(f==0)
    {
        printf("The element is not found");
    }
    free(p);
}