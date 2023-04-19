#include<stdio.h>

int main()
{
    int x,y,p,q,a,b;
    printf("Enter dist1\n");
    scanf("%d%d",&x,&y);
    printf("Enter dist2\n");
    scanf("%d%d",&p,&q);
    a=(y+q)/1000;
    b=(y+q)%1000;
    printf("\nThe sum of distances is %dkm %dm",x+p+a,b);
    return 0;
}