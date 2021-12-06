#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k;
	d=0;
	e=0;
	f=0;
	g=0;
	h=0;
	i=0;
	j=0;
	k=0;
	printf("enter your number: ");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		switch(b)
		{
			case 1:
			c=c+1;
			break;
			case 2:
			d=d+1;
			break;
			case 3:
			e=e+1;
			break;
			case 4:
			f=f+1;
			break;
			case 5:
			g=g+1;
			break;
			case 6:
			h=h+1;
			break;
			case 7:
			i=i+1;
			break;
			case 8:
			j=j+1;
			break;
			case 9:
			k=k+1;
			break;
		}
		a=a/10;
	}
	while(c>0)
	{
		printf("\nthe number 1 has been repeated %d times",c);
		break;
	}
	while(d>0)
	{
		printf("\nthe number 2 has been repeated %d times",d);
		break;
	}
	while(e>0)
	{
		printf("\nthe number 3 has been repeated %d times",e);
		break;
	}
	while(f>0)
	{
		printf("\nthe number 4 has been repeated %d times",f);
		break;
	}
	while(g>0)
	{
		printf("\nthe number 5 has been repeated %d times",g);
		break;
	}
	while(h>0)
	{
		printf("\nthe number 6 has been repeated %d times",h);
		break;
	}
	while(i>0)
	{
		printf("\nthe number 7 has been repeated %d times",i);
		break;
	}
	while(j>0)
	{
		printf("\nthe number 8 has been repeated %d times",j);
		break;
	}
	while(k>0)
	{
		printf("\nthe number 9 has been repeated %d times",k);
		break;
	}
	return 0;
}