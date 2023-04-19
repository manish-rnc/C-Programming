// Program to search an element in the array
#include<stdio.h> 
int main()
{
    int n,num,found=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            printf("The number %d is found at index %d\n",num,i);
            found=1;
        }
    }
    if(found==0)
    {
        printf("Element not found\n");
    }
}