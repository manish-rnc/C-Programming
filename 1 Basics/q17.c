#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2;
    float side, area, per;
    printf("Enter the coordinates of square\n");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    side = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    area = side * side;
    per = side * 4;
    printf("AREA=%f\tPERIMETER=%f\n", area, per);
    return 0;
}