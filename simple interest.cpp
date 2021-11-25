#include<stdio.h>
int main()
{
	float p,i,t,a;
	printf("wlecome to simple interest calculator \nwe will tell you the final amount if you provide us initial principal, annual interest rate and time(in years) \nbut please enter the values with a space: ");
	scanf("%f %f %f",&p,&i,&t);
	a=p+(p*(i/100)*t);
	printf("the total sum payable is %.2f",a);
	return 0;
}