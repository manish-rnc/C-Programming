// Program to find the number of occurence of an element in the array
#include<stdio.h>
int main()
{
    int n,num,y=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to find its occurence: ");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            y++;
        }
    }
    printf("The number %d occured %d times in the array\n",num,y);
}