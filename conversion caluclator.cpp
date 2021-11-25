#include <stdio.h>

int main()
{
	char z;
	printf("welcome to conersion caluclator,what do you want to convert??\n1)distance\n2)time\n3)temperature\n4)volume\n5)area\n(enter the the no. eg:- 1,etc): ");
	scanf("%c",&z);
	switch(z)
	{
		case '1':
		float k,M,c;
		printf("enter the number of kilometers: ");
		scanf("%f",&k);
		M=k*1000;
		c=M*100;
		printf("%.1f kilometers is %.0f meters and %.0f centimeters",k,M,c);
		break;
		
		case '2':
		float h,m,s;
		printf("\nenter the number of hours: ");
		scanf("%f",&h);
		m=h*60;
		s=m*60;
		printf("%.1f hours is %.1f minutes and %.1f seconds",h,m,s);
		break;
		
		case '3':
		float C,K,f;
		printf("\nenter the temperature in degree celsius: ");
		scanf("%f",&C);
		f=(C*1.8)+32;
		K=C+273.15;
		printf("%.2f degree celsius is %.2f degree farenheit and %.2f kelvin",C,f,K);
		break;
		
		case '4':
		float l,g,ml;
		printf("\nenter the number of liters: ");
		scanf("%f",&l);
		g=l/3.785;
		ml=l*1000;
		printf("%.2f liters is %.2f us gallons and %0.f milliliters",l,g,ml);
		break;
		
		case '5':
		float sm,sf,a;
		printf("\nenter the area in square meters: ");
		scanf("%f",&sm);
		sf=sm*10.764;
		a=sm/4047;
		printf("%.2f sq meters is %.2f sq foot and %.2f acres",sm,sf,a);
		break;
	}
	
	return 54;
}