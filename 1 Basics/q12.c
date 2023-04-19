#include<stdio.h>

int main()
{
    int dist,time;
    printf("Enter the distance travelled in km\n");
    scanf("%d",&dist);
    printf("Enter the time taken in hour\n");
    scanf("%d",&time);
    printf("The speed of the car is %d km/hr",dist/time);
    return 0;
}