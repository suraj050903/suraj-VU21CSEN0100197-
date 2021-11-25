#include <stdio.h>

int main()
{
	int a,b;
	printf("enter your age plz: ");
	scanf("%d",&a);
	b=18-a;
	if(a>=18)
	{
	printf("you are eligible to vote");
	}
	else
	{
		printf("your are not eligible to vote you have to wait for another %d years to vote",b);
	}
	return 78;
}