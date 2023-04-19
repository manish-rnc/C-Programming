// Array of pointers
#include<stdio.h>
int main()
{
    int a[5]={1,5,3,6,4};
    int *p=a;      //points to 0th element of the array
    printf("%u\n", p);
    printf("%u\n", (p+1));
    printf("%u\n", (p+2));
    printf("%u\n", (p+3));
    printf("%u\n", (p+4));
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    printf("%d\n", *(p+2));
    printf("%d\n", *(p+3));
    printf("%d\n", *(p+4));


    int arr[3] = { 100, 200, 300 };
    int *ptr[3] ;
    ptr[0]= &arr[0];       //pointing to the elements resp.
    ptr[1]= &arr[1]; 
    ptr[2]= &arr[2]; 
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", *ptr[0]);
    printf("%d\n", *ptr[1]);
    printf("%d\n", *ptr[2]);


    int b[5]={1,5,3,6,4};
    int *s=&a[0];       //pointing to 0th element of the array
    printf("%u\n", s);
    printf("%u\n", (s+1));
    printf("%u\n", (s+2));
    printf("%u\n", (s+3));
    printf("%u\n", (p+4));
    printf("%d\n", *s);
    printf("%d\n", *(s+1));
    printf("%d\n", *(s+2));
    printf("%d\n", *(s+3));
    printf("%d\n", *(s+4));
}