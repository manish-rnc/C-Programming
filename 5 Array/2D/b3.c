// Program to find the sum of two matrix
#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columnns: ");
    scanf("%d",&c);
    int a[r][c];
    int b[r][c];
    int sum[r][c];

    printf("Enter the elements of the array\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the value at a[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the elements of the other array\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the value at b[%d][%d]: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("After adding:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}