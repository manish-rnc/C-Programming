#include<stdio.h>
int main()
{
    float hard,carbon,tensile;
    printf("Enter the hardness of steel\n");
    scanf("%f",&hard);
    printf("Enter the carbon strength\n");
    scanf("%f",&carbon);
    printf("Enter the tensile strength of carbon\n");
    scanf("%f",&tensile);
    if (hard>=50 && carbon<0.7)
    {
        if (tensile>5600)
        {
            printf("Grade 10\n");
        }
        else
        {
            printf("Grade 9\n");
        }
    }
    else if (carbon<0.7 && tensile>5600)
    {
        printf("Grade 8\n");
    }
    else if (hard>=50 && tensile>5600)
    {
        printf("Grade 7\n");
    }
    else if (hard>=50)
    {
        printf("Grade 6\n");
    }
    else if (carbon<0.7)
    {
        printf("Grade 6\n");
    }
    else if (tensile>5600)
    {
        printf("Grade 6\n");
    }
    else
    {
        printf("Grade 5\n");
    }
    return 0;
}