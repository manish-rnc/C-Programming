//  WAP to add 18 to each element of the array using function and pointer.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    int *ptr=a;
    printf("Enter the contents of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        *(ptr + i)=*(ptr + i) + 18;
    }
    printf("Array after adding: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}