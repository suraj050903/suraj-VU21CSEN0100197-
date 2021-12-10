#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter how many rows of the half pyramid you want: ");
	scanf("%d",&a);
	for(b=0;b<a;++b)
	{
		for(c=0;c<=b;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}