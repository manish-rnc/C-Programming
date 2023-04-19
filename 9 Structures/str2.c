#include<stdio.h>
struct student
{
    char name[10];
    int roll;
    char sec;
};                 //can be initialized here also

int main()
{
    struct student var={"Student",84,"K"}; //way to initialise a value to the variable
    printf("%s ",var.name);
    printf("%d ",var.roll);
    printf("%c ",var.sec);
}