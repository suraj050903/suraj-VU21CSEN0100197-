#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	printf("enter the number whose square you want to find: ");
	scanf("%f",&a);
	b=pow(a,0.5);
	printf("square root of %.0f=%.1f",a,b);
	return 0;
}

// this also works but if you want another way then use sqrt()
// eg:- b=sqrt(a);
// but sqrt only works for square root but using pow you can find cube roots and so on