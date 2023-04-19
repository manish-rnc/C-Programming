#include <stdio.h>
union abc
{ 
    int a; 
    char b; 
    float c; 
    double d; 
    char name[10];
}; 

int main() 
{ 
    union abc x;
    printf("Size of union abc: %d\n", sizeof(x)); 
    printf(" size of a: %d\n", sizeof(x.a)); 
    printf(" size of b: %d\n", sizeof(x.b)); 
    printf(" size of c: %d\n", sizeof(x.c)); 
    printf(" size of d: %d\n", sizeof(x.d)); 
    printf(" size of name: %d\n", sizeof(x.name)); 
    return 0; 
}
