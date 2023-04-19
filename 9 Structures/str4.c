// Program to find difference between two given dates
#include<stdio.h>
struct date 
{
    int d,m,y;
};
int main()
{
    int dd,mm,yy,leap;
    struct date d1,d2;
    printf("Enter 1st date in dd/mm/yyyy format\n");
    scanf("%d%d%d",&d1.d,&d1.m,&d1.y);
    printf("Entered date is %d/%d/%d\n",d1.d,d1.m,d1.y);
    printf("--------------------------------------\n");
    printf("Enter 2nd date in dd/mm/yyyy format\n");
    scanf("%d%d%d",&d2.d,&d2.m,&d2.y);
    printf("Entered date is %d/%d/%d\n",d2.d,d2.m,d2.y);
    printf("--------------------------------------\n");
    if(d1.m>d2.m)
    {
        yy=d1.y-d2.y;
        if(d1.d>d2.d)
        {
            mm=d1.m-d2.m;
            dd=d1.d-d2.d;
        }
        else
        {
            mm=d1.m-(d2.m+1);
            dd=d1.d+(30-d2.d);
        }
    }
    else
    {
        yy=d1.y-(d2.y+1);
        if(d1.d>d2.d)
        {
            mm=12-(d2.m-d1.m);
            dd=d1.d-d2.d;
        }
        else
        {
            mm=d1.m-(d2.m+1);
            dd=d1.d+(30-d2.d);
        }
    }
    printf("The difference between the dates is %d years %d months %d days",yy,mm,dd);
}