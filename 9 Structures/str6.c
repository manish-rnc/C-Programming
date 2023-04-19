// Create a structure to store the following information of student: Roll number, Name,
// Course, Year of joining
// Assume that there are not more than 10 students in the college.
// (a) Write a function to print names of all students who joined in a particular year.
// (b) Write a function to print the data of a student whose roll number is given.

#include<stdio.h>
struct information
{
    int roll;
    char name[20];
    char course[10];
    int year;
};
int main()
{
    int rollno,yr;
    struct information x[4];
    for(int i=0;i<4;i++)
    {
        printf("Enter the roll no: ");
        scanf("%d",&x[i].roll);
        printf("Enter the name: ");
        scanf(" %[^\n]",&x[i].name);
        printf("Enter the course opted: ");
        scanf("%s",&x[i].course);
        printf("Enter year of joining: ");
        scanf("%d",&x[i].year);
        printf("-------------------\n");
    }
    printf("__________________________\n");
    printf("Enter the roll no to find its details: ");
    scanf("%d",&rollno);
    // void details(&n);
    for(int i=0;i<4;i++)
    {
        if(x[i].roll==rollno)
        {
            printf("Name: %s\n",x[i].name);
            printf("Roll no: %d\n",x[i].roll);
            printf("Course opted: %s\n",x[i].course);
            printf("Year of joining: %d\n",x[i].year);
        }
    }
    printf("__________________________\n");
    printf("Enter the year to find the students joined that year: ");
    scanf("%d",&yr);
    for(int i=0;i<4;i++)
    {
        if(x[i].year==yr)
        {
            printf("%s\n",x[i].name);
        }
    }
}