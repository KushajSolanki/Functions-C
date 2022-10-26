#include<stdio.h>
main()
{
	add();
}
void add()
{
	int a,b,c;
	printf("Enter 2 numbers: \n");
	scanf("%i%i",&a,&b);
	c=a+b;
	printf("Addition is equal to : %d",c);
}
