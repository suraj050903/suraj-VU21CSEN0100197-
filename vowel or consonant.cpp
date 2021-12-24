#include<stdio.h>
int main()
{
	char a;
	printf("enter your alphabet: ");
	scanf("%c",&a);
	if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
	{
		printf("the alphabet '%c' is a vowel",a);
	}
	else
	{
		printf("the alphabet '%c' is consonant",a);
	}
	return 0;
}