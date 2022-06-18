#include<stdio.h>

main()
{
	int n,ld,fd,sum;
	
	printf("Enter Number :-");
	scanf("%i",&n);
	
	ld = n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	sum=fd+ld;
	
	printf("sum of first digit and second digit is %i",sum);
}
