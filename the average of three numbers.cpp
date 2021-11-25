#include <stdio.h>

int main()
{
	int a,b,c;
	float d;
	printf("enter your first number: ");
	scanf("%d",&a);
	printf("enter your second number: ");
	scanf("%d",&b);
	printf("enter your third number: ");
	scanf("%d",&c);
	d=(a+b+c)/3.0;
	printf("the average of the three numbers is %.2f",d);
	return 54;
}