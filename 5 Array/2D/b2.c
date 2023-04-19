// Program to find the transpose of the matrix
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columnns: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the elements of the array\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter the value at a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("The entered matrix is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix is:\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}