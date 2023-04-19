#include<stdio.h>
struct book
{
    char bname[20];
    char authname[15];
    float price;
    int edition;
};
int main()
{
    int n,i;
    printf("Enter the number of books whose details is to be stored: ");
    scanf("%d",&n);
    struct book x[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the name of the book: ");
        scanf(" %[^\n]",&x[i].bname);
        printf("Enter the name of the author of the book: ");
        scanf(" %[^\n]",&x[i].authname);
        printf("Enter the price of the book: ");
        scanf("%f",&x[i].price);
        printf("Enter the edition of the book: ");
        scanf("%d",&x[i].edition);
        printf("-----------------------------\n");
    }
    printf("___________________________________________");
    for(i=0;i<n;i++)
    {
        printf("\nName of the book: %s",x[i].bname);
        printf("\nName of the author: %s",x[i].authname);
        printf("\nPrice of the book: %.2f",x[i].price);
        printf("\nEdition of the book: %d",x[i].edition);
        printf("\n-----------------------------");
    }
}
