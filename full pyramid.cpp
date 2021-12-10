#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	c=1;
	e=0;
	d=0;
	printf("enter how many rows of the full pyramid you want: ");
	scanf("%d",&a);
	while(a>0)
	{
		for(b=a-1;b>0;b--)
		{
			printf(" ");
		}
		e=0;
		while(e<=d)
		{
			printf("*");
			e++;
		}
		printf("\n");
		a--;
		d=d+2;
	}
	return 0;
}