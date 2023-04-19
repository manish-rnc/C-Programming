#include<stdio.h>
#include<string.h>
struct student
{
    char name[10];
    int roll;
    float marks;
};                 

int main()
{
   struct student x,y;
// For 1st student
   strcpy(x.name,"Man");
   x.roll=55;
   x.marks=90.6;

   printf("Name: %s\n",x.name);
   printf("Roll: %d\n",x.roll);
   printf("Marks: %.1f\n",x.marks);

// For 2nd student
   strcpy(y.name,"Woman");
   y.roll=74;
   y.marks=85.6;

   printf("Name:  %s\n",y.name);
   printf("Roll: %d\n",y.roll);
   printf("Marks: %.1f\n",y.marks);
}