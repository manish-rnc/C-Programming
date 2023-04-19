// WAP to find maximum element present in the array using pointer.
#include<stdio.h>
int main()
{
    int n,i,largest;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    int *ptr=a;
    printf("Enter the contents of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    largest=*(ptr);
    for(i=0;i<n;i++)
    {
        if(*(ptr + i) > largest)
        {
            largest=*(ptr + i);
        }
    }
    printf("The largest element in the array is: %d",largest);
}