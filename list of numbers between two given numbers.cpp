#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the two numbers between which you want the list: ");
	scanf("%d %d",&a,&b);
	printf("the list of numbers is =>\n");
	if(a>b)
	{
		for(a>b;a>=b;--a)
		{
			printf("\n%d",a);
		}
	}
	else if(a<b)
	{
		for(a<b;a<=b;++a)
		{
			printf("\n%d",a);
		}
	}
	else
	{
		printf("error");
	}
	return 0;
}