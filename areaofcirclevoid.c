#include<stdio.h>
main()
{
	int r;
	printf("Enter radius of circle: \n");
	scanf("%d",&r);
	area(r);
}
void area(int r)
{
	float pi;
	pi=3.14;
	printf("Area of circle is %f",pi*r*r);
}
