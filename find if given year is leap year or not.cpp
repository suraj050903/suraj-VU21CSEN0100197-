#include<stdio.h>
int main()
{
	int a;
	printf("plz enter your year: ");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("it's a leap year!!!");
	}
	else
	{
		printf("%d is not a leap year, the previous leap year was %d and the next leap year will be %d",a,a-(a%4),a-(a%4)+4);
	}
	return 0;
}