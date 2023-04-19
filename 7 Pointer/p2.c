// Increment and Decrement of pointer
#include<stdio.h>
int main()
{
    int m=18;
    int *ptr=&m;
    printf("Address of the integer is %u\n",ptr);
    ptr++;
    printf("Address of the integer after increment is %u\n",ptr);

    float y=18;
    float *zr=&y;
    printf("Address of the float is %u\n",zr);
    zr++;
    printf("Address of the float after increment is %u\n",zr);

    double p=91;
    double *pt=&p;
    printf("Address of the double is %u\n",pt);
    pt--;
    printf("Address of the double after increment is %u\n",pt);

    char a='A';
    char *cp=&a;
    printf("Address of the character is %u\n",cp);
    cp++;
    printf("Address of the character after increment is %u\n",cp);
}