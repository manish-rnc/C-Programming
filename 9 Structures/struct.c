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

void details(struct information *,int );
void students_joined(struct information *,int);

int main()
{
    int rollno,yr;
    struct information x[3];
    for(int i=0;i<3;i++)
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

    printf("Enter the roll no to find its details: ");
    scanf("%d",&rollno);
    details(x,rollno);
    
    printf("\nEnter the year to find the students joined that year: ");
    scanf("%d",&yr);
    students_joined(x,yr);
}

void details(struct information x[],int r)
{
    for(int i=0;i<4;i++)
    {
        if(x[i].roll==r)
        {
            printf("Name: %s\n",x[i].name);
            printf("Roll no: %d\n",x[i].roll);
            printf("Course opted: %s\n",x[i].course);
            printf("Year of joining: %d\n",x[i].year);
        }
    }
}

void students_joined(struct information x[],int y)
{
    for(int i=0;i<4;i++)
    {
        if(x[i].year==y)
        {
            printf("%s\n",x[i].name);
        }
    }
}