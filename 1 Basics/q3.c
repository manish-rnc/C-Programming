#include<stdio.h>

int main()
{
    int paisa;
    printf("Enter money in terms of paisa\n");
    scanf("%d",&paisa);
    printf("The equivalent is %d rupees and %d paisa",paisa/100,paisa%100);
    return 0;
}