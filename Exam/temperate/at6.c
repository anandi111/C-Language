#include<stdio.h>

main()
{
	int n,sum=0,i;
	
	printf("Enter Number :-");
	scanf("%i",&n);
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum =0;
		}
	}
	
	if(sum==0)
	{
		printf("Number isn't prime.");
	}
	else
	{
		printf("Number is Prime");
	}
	
}
