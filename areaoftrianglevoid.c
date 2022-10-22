#include<stdio.h>
main()
{
	int a;
	a=area();
	printf("Area of triangle is: %d",a);
}
int area()
{
	int b,h,a;
	printf("Enter height and breadth of triangle: \n");
	scanf("%d%d",&h,&b);
	a=0.5*h*b;
	return a;
}
