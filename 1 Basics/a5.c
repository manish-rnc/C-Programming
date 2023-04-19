#include<stdio.h>

int main()
{
    int rad;
    printf("Enter the value of the radius of circle\n");
    scanf("%d",&rad);
    printf("The circumference of the circle is %.2f units\n",2*3.14*rad);
    printf("The area of the circle is %.2f sq. units",3.14*rad*rad);
    return 0;
}