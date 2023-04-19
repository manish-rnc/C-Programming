#include<stdio.h>
#include<string.h>
union job
{
    char name[10];
    int age;
    float salary;
};

int main()
{
    union job x;
    strcpy(x.name,"Radheshyam");
    x.age=27;
    x.salary=43000;
    printf("Name=%s\n",x.name);
    printf("Age=%d\n",x.age);
    printf("Salary=%.2f\n",x.salary);
}