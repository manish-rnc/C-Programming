#include<stdio.h>
#include<string.h>
struct cricketer
{
    char name[20];
    char country[10];
    int no_of_matches;
    int run_scored;
    int wickets;
    int catches;
};
int main()
{
    struct cricketer p[5];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter the name of the player %d: ",i+1);
        scanf("%s",&p[i].name);
        printf("Enter the country of the player: ");
        scanf("%s",&p[i].country);
        printf("Enter the no of matches played: ");
        scanf("%d",&p[i].no_of_matches);
        printf("Enter the run scored: ");
        scanf("%d",&p[i].run_scored);
        printf("Enter the no of wickets taken: ");
        scanf("%d",&p[i].wickets);
        printf("Enter the no of catches taken: ");
        scanf("%d",&p[i].catches);
        printf("---------------------------------\n");
    }
    printf("_________________________________________________\n");
    for(i=0;i<3;i++)
    {
        printf("Name of the player: %s\n",p[i].name);
        printf("Country of the player: %s\n",p[i].country);
        printf("No of matches played: %d\n",p[i].no_of_matches);
        printf("Run scored by the player: %d\n",p[i].run_scored);
        printf("Wickets taken by the player is %d\n",p[i].wickets);
        printf("Catches taken by the player is %d\n",p[i].catches);
         printf("---------------------------------\n");
    }
    for(i=0;i<3;i++)
    {
        if(p[0].run_scored<p[i].run_scored)
        {
            p[0].run_scored=p[i].run_scored;
        }
    }
    printf("The highest run scored is %d",p[0].run_scored);
}