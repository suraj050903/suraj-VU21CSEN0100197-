#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter your 1st and 2nd angle: ");
	scanf("%d %d",&a,&b);
	c=180-a-b;
	printf("The third angle of your triangle is %d",c);
	return 0;
}