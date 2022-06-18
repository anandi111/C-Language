#include<stdio.h>

int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

main()
{
	int n1,n2;
	
	printf("Enter number :- ");
	scanf("%i",&n1);
	printf("Enter number :- ");
	scanf("%i",&n2);
	
	printf("factorial of %i = %i\n",n1,fact(n1));
	printf("factorial of %i = %i",n2,fact(n2));
	
}
