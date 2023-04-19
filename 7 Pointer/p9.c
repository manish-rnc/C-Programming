// WAP to search an element of an array using linear search and pointer.
#include<stdio.h>
int main()
{
    int n,i,x,p=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    int *ptr=a;
    printf("Enter the contents of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Enter the number you want to search for: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(*(ptr + i)==x)
        {
            printf("Element %d is found at index %d ",x,i);
            p=1;
        }
    }
    if(p==0)
    {
        printf("Element not found\n");
    }
}