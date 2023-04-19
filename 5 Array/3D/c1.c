#include<stdio.h>
int main()
{
    int a[3][3][3],i,j,k;
    printf("Enter the elements for the 3D array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("Enter the element at a[%d][%d][%d]: ",i,j,k);
                scanf("%d",&a[i][j][k]);
            }
            printf("\n");
        }
        printf("----------------------\n");
    }
    for(i=0;i<3;i++)
    {
        printf("\n---Plane %d---\n",i+1);
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d ",a[i][j][k]);
            }
            printf("\n");
        }
    }
}