#include <stdio.h>

int main()
{
	float h,m,s;
	printf("enter the number of hours: ");
	scanf("%f",&h);
	m=h*60;
	s=m*60;
	printf("%.1f hours is %.1f minutes and %.1f seconds",h,m,s);
	return 54;
}