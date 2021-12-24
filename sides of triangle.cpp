#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the sides of your triangle(with spaces): ");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("the given sides are of an equilateral triangle");
	}
	else if(a==b || b==c || a==c)
	{
		printf("the given sides belong to an isosceles triangle");
	}
	else
	{
		printf("the given sides belong to an scalene triangle");
	}
	return 0;
}