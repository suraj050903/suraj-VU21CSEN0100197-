#include<stdio.h>
int main()
{
	int a,b,c,i;
	printf("how many rows you want: ");
	scanf("%d",&a);
	c=1;
	b=1;
	while(b<=a)
	{
		for(i=1;i<=b;i++)
		{
			printf("%d ",c);
			c=c+1;
		}
		printf("\n");
		b++;
	}
	return 0;
}