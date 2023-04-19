#include<stdio.h>
int main()
{
    int a[5]={1,4,3,5,6};     //way to initialise an array
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }

    int b[5]={1,4,9};         //automatically takes 0 value in non initialized index
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }

    printf("\n");
    
    int c[]={5,3,2,8,6,1};    //without specifying the size of the array
    for(int i=0;i<6;i++)
    {
        printf("%d ",c[i]);
    }

    printf("\n");
    
    int d[3]={3,2,5};        //Both type will show the array in order
    for(int i=0;i<3;i++)
    {
        printf("%d ",d[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("%d ",i[d]);
    }

    printf("\n");
    
    int e[5];
    for(int i=0;i<5;i++)      //will print the garbage values as not initialised
    {
        printf("%d ",e[i]);
    }
}