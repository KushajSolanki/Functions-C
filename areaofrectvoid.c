#include<stdio.h>
void area(int l,int b);
main()
{
	int l,b;
	printf("Enter length and breadth of rectangle: \n");
	scanf("%d%d",&l,&b);
	area(l,b);
}
void area(int l,int b)
{
	int a;
	a=l*b;
	printf("Area of rectangle is %d",a);
}

