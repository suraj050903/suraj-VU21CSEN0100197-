#include <stdio.h>
#include <math.h>
int main()
{
	float p,i,n,t,a,r,z;
	printf("enter your pricipal amount: ");
	scanf("%d",&p);
	printf("enter the interest rate: ");
	scanf("%d",&i);
	printf("enter the number of times interst applied per time period: ");
	scanf("%d",&n);
	printf("enter the number of time periods elapsed: ");
	scanf("%d",&t);
	r=r/100;
	a=p*(pow(1+(r/n.0),n*t));
	z=a-p;
	printf("the final amount is %.2f",z);
	return 0;
}