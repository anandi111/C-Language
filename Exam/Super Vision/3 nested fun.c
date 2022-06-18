#include<stdio.h>

int two()
{
	int a,b;
	
	printf("Enter value of A :- ");
	scanf("%i",&a);
	printf("Enter value of B :- ");
	scanf("%i",&b);
	
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int three()
{
	int c,ans;
	
	printf("Enter value of C :- ");
	scanf("%i",&c);
	
	ans=two();
	
	if(ans<c)
	{
		return c;
	}
	else
	{
		return ans;
	}
}

main()
{
	printf("max num. is %i",three());
}
