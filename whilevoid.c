#include<stdio.h>
void add();
main()
{
	int i=1;
	while(i<=4)
	{
		add();
		i++;
	}
}
void add()
{
	int a,b,c;
	printf("\nEnter 2 numbers: \n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Addition is equal to: %d",c);
}
