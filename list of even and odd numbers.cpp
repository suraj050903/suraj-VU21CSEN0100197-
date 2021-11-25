#include <stdio.h>

int main()
{
	int e=0;
	int o=1;
	int a;
	printf("enter the number till which you want the list of odd and even: ");
	scanf("%d",&a);
	printf("the list of even numbers are: ");
	for(e=0;e<=a;++++e)
	{
		printf("\n%d",e);
	}
	printf("\nthe list of odd numbers are: ");
	for(o=1;o<=a;++++o)
	{
		printf("\n%d",o);
	}
	return 0;
}