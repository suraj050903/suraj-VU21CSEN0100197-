#include<stdio.h>
int main()
{
	int a,b=1,s=0;
	printf("enter your number: ");
	scanf("%d",&a);
	while(b<a)
	{
		while(a%b==0)
		{
			s=s+b;
			break;
		}
		b++;
	}
	if(s==a)
	{
		printf("then number you've enetered is perfect!!!");
	}
	else
	{
		printf("the number you've entered is not perfect :(");
	}
	return 0;
}