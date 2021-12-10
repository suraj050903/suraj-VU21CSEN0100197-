#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	c=1;
	e=0;
	g=0;
	d=0;
	printf("enter how many rows of the full pyramid you want: ");
	scanf("%d",&a);
	f=a;
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
	d=d-4;
	c=0;
	b=0;
	while(g<f)
	{
		g++;
		for(c=0;c<=b;c++)
		{
			printf(" ");
		}
		b++;
		for(c=0;c<=d;c++)
		{
			printf("*");
		}
		printf("\n");
		d=d-2;
	}
	return 0;
}