// Program to print the number of odd and even numbers in the array
#include<stdio.h>
int main()
{
    int n,odd=0,even=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else if (a[i]!=0)
        {
            odd++;
        }
    }
    printf("The number of odd numbers: %d\n",odd);
    printf("The number of even numbers: %d",even);
}