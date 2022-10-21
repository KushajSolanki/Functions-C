#include<stdio.h>
void factorial(int n);
main()
{
	int n;
	printf("Enter a number: \n");
	scanf("%d",&n);
	factorial(n);
}
void factorial(int n)
{
	int f=1; int i=1;
	for (i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("Factorial is %d",f);
}
