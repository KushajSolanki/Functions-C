#include<stdio.h>
void avg(int a,int b,int c);
main()
{
	int a,b,c;
	printf("Enter 3 numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	avg(a,b,c);
}
void avg(int a,int b,int c)
{
	int s;
	s=(a+b+c)/3;
	printf("Average is %d",s);
}
