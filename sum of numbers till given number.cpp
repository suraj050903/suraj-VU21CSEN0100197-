#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,s;
	i=0;
	s=0;
	printf("enter the number till which you want the sum of numbers: ");
	scanf("%d",&a);
	for(i=0;i<=a;++i)
	{
		s=s+i;
	}
	printf("The sum of all the numbers til %d is %d",a,s);
	return 0;
}