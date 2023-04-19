#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,dis;
    printf("Enter the coefficients of the quadratic equation\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("The quadratic equation is %dx^2 + %dx + %d=0\n",a,b,c);

    dis=(b*b-4*a*c);

    if (dis>0)
    {
        printf("root1=%.1f\n",(-b+sqrt(dis))/(2*a));
        printf("root2=%.1f",(-b-sqrt(dis))/(2*a));
    }

    else if (dis==0)
    {
        printf("root1=root2=%.1f",-b/2*a);
    }

    else
    {
        printf("root1=%.1f + %.2f\n",-b/2*a,sqrt(dis)/2*a);
        printf("root2=%.1f - %.2f",-b/2*a,sqrt(dis)/2*a);
    }
    
    return 0;    
}