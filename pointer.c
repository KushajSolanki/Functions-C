//program for pointer
#include<stdio.h>
void increament(int *p);
main()
{
	int a=10;
	increament(&a);
	printf("\nIn main %d",a);
}
void increament(int *p)
{
	(*p)++;
	printf("\nIn function %d",*p);
}
