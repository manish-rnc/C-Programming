#include<stdio.h>
int main()
{
    int m,n,p,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columnns: ");
    scanf("%d",&n);
    printf("Enter the number of columns for 2nd array: ");
    scanf("%d",&p);
    int a[m][n];
    int b[n][p];
    int prd[m][p];

    printf("Enter the elements of the 1st array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the value at a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the elements of the 2nd array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("Enter the value at b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            prd[i][j]=a[i][j]*b[i][j] + a[i][i]*b[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",prd[i][j]);
        }
        printf("\n");
    }
}
