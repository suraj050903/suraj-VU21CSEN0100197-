#include<stdio.h>

int main()
{
	int a,b;
	printf("enter the number you want reversed: ");
	scanf("%d",&a);
	printf("the number reversed is: ");
	while(a>0)
	{
		b=a%10;
		printf("%d",b);
		a=a/10;
	}
	return 0;
}