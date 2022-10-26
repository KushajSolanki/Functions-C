//program for poitner
#include<stdio.h>
void increament(int *a);
main()
{
	int a=10000;
	increament(&a);
	printf("New salary is : %d",a);
}
void increament(int *a)
{
   *a = *a+*a*0.1 ;
   printf("%d",*a);
}

