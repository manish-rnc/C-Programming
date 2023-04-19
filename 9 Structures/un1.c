#include<stdio.h>
union job1
{
    char name[10];
    int age;
    float salary;
}var1;
struct job2
{
    char name[10];
    int age;
    float salary;
}var2;

int main()
{
    printf("Size of union =%d bytes\n",sizeof(var1));
    printf("Size of structure =%d bytes\n",sizeof(var2));
}