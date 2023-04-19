#include<stdio.h>

int main()
{ 
    int len,wid;
    printf("Enter the length of the rectangle\n");
    scanf("%d",&len);
    printf("Enter the width of the rectangle\n");
    scanf("%d",&wid);
    printf("\nThe area of the rectangle is %d\n",len*wid);
    printf("The perimeter of the rectangle is %d\n",2*(len+wid));
    return 0;
}