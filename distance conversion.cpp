#include <stdio.h>

int main()
{
	float k,m,c;
	printf("enter the number of kilometers: ");
	scanf("%f",&k);
	m=k*1000;
	c=m*100;
	printf("%.1f kilometers is %.0f meters and %.0f centimeters",k,m,c);
	return 54;
}