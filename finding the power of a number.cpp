#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("enter the values of the base number and the power it should be raised to (with a gap in between): ");
	scanf("%f %f",&a,&b);
	c=pow(a,b);
	printf("%.0f^%.0f=%.0f",a,b,c);
	return 0;
}