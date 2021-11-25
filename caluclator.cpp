#include <stdio.h>
int main()
{
	float a,b,d;
	char c;
	printf("enter your two numbers with the operator(+,-,*,/) you want in the middle(eg:- 2+2) : ");
	scanf("%f%c%f",&a,&c,&b);
	switch(c)
	{
		case '+':
		printf("the sum of the two numbers is %.0f",a+b);
		break;
		case '-':
		printf("the differnece between the two numbers is %.0f",a-b);
		break;
		case '*':
		printf("the product of the two numbers is %.0f",a*b);
		break;
		case '/':
		d=a/b;
		printf("the division of the two numbers is %.2f",d);
		break; 
	}
	return 0;
}