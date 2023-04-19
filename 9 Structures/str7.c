// Define a structure comp containing two data members integer real and integer imag.
// WAP to perform the following task:
// a)To read complex number using function
// a)To print complex number using function
// a)To add 2 complex numbers using function
// a)To multiply 2 complex numbers using function

#include<stdio.h>
struct comp
{
    int real;
    int imag;
};
void read(struct comp *);
void display(struct comp *);
int add(struct comp *,struct comp *);
int mul(struct comp *,struct comp *);
int main()
{
    struct comp a,b;
    printf("Enter the real and imaginary part of the first number : ");
    read(&a);
    printf("Enter the real and imaginary part of the second number : ");
    read(&b);
    printf("The first complex number is : ");
    display(&a);
    printf("\nThe second complex number is : ");
    display(&b);
    printf("\nThe sum of the complex numbers is : ");
    add(&a,&b);
    printf("\nThe product of the complex numbers is : ");
    mul(&a,&b);
}
void read(struct comp *x)
{
    scanf("%d %d",&(x->real),&(x->imag));
}
void display(struct comp *r)
{
    printf("%d + %di",r->real,r->imag);
}
int add(struct comp *p,struct comp *q)
{
    printf("%d + %di",(p->real + q->real),(p->imag + q->imag));
}
int mul(struct comp *x,struct comp *y)
{
    printf("%d + %di\n",(x->real*y->real - x->imag*y->imag),(x->real*y->imag + x->imag*y->real));
}