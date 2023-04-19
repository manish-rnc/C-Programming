#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    printf("The sum of the numbers is %d\n",x+y);
    printf("The average of the numbers is %.1f",(x+y)/2.0);
    return 0;
}
