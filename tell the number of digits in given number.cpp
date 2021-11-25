#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	b=0;
	printf("give any number and we will tell the number of digits it has: ");
	scanf("%d",&a);
	for(b=0;a>0;b++)
	{
		b=b;
		a=a/10;
	}
	printf("the number of digits this number has is: %d",b);
	return 0;
}