#include<stdio.h>
int main()
{
	int a,r,s,f;
	s=0;
	printf("enter the number: ");
	scanf("%d",&a);
	f=a;
	while(a>0)
	{
		r=a%10;
		s=s*10+r;
		a=a/10;
	}
	if(f==s)
	{
		printf("the number entered is a palindrome!!!");
	}
	else
	{
		printf("the number entered is not a palindrome :(");
	}
	return 0;
}