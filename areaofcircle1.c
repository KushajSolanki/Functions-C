#include<stdio.h>
float area(int r);
main()
{
	int r;
	float a;
	printf("Enter radius of circle: \n");
	scanf("%d",&r);
	a=area(r);
	printf("Area of circle is %f",a);
}
float area(int r)
{
	float pi,a;
	pi=3.14;
	a=pi*r*r;
	return a;
}
