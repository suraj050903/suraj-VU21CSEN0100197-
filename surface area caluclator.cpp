#include<stdio.h>
int main()
{
	int a;
	float b,c,s;
	printf("welcome to surface area caluclator for sphere press 1\n                                       cube         2\n                                       cylinder     3\n                                       cone         4:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("enter the radius of the sphere: ");
			scanf("%f",&b);
			s=4*(3.14)*b*b;
			printf("The surface area of your sphere is %.2f",s);
			break;
			case 2:
			printf("enter the length of edge of the cube: ");
			scanf("%f",&b);
			s=b*b*b;
			printf("The surface area of your cube is %.2f",s);
			break;
			case 3:
			printf("enter the radius and height of the cylinder: ");
			scanf("%f %f",&b,&c);
			s=2*(3.14)*b*c;
			printf("The surface area of your cylinder is %.2f",s);
			break;
			case 4:
			printf("enter the radius and slant height of the cone: ");
			scanf("%f %f",&b,&c);
			s=2*(3.14)*b*c;
			printf("The surface area of your sphere is %.2f",s);
			break;
	}
	return 0;
}