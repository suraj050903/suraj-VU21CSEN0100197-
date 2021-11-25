#include <stdio.h>
int main()
{
	float a,b,c,d,e,t,v,p;
	printf("enter your maths marks: ");
	scanf("%f",&a);
	printf("enter your science marks: ");
	scanf("%f",&b);
	printf("enter your social studies marks: ");
	scanf("%f",&c);
	printf("enter your hindi marks: ");
	scanf("%f",&d);
	printf("enter your english marks: ");
	scanf("%f",&e);
	t=a+b+c+d+e;
	v=t/5;
	printf("the total marks are %.2f out of 500",t);
	printf("\nthe average marks is %.2f",v);
	printf("\nthe total percentage is %.2f%%",v);
	return 0;
}