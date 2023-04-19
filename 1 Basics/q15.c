#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,theta;
    printf("Enter the value x and y as cartesian coordinates\n");
    scanf("%f%f",&x,&y);
    r=sqrt(pow(x,2)+pow(y,2));
    theta=atan(x/y);
    printf("The polar coordinates are (%f,%f)",r,theta);
    return 0;
}