#include<stdio.h>
void main()
{
	int p,q,r,x,y,z;
	for(x=1000;x<=10000;x++)
	{
		p=x/1000;
		q=(x/100)%10;
		r=(x%100)/10;
		y=x%10;
		if(y==p+q+r)
		{
			printf("%d\n",x);
		}
	}
}