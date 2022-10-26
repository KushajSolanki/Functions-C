//program for swap pointer
#include<stdio.h>
main()
{
	int a=10,b=20;
	swap(&a,&b);
	printf("\nIn main: %d %d",a,b);
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	printf("In function: %d %d",*a,*b);
}
