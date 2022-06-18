#include<stdio.h>

main()
{
	int n,count=0;
	
	printf("Enter Number :-");
	scanf("%i",&n);
	
	while(n>0)
	{
		n=n/10;
		count = count + 1;
	}
	
	printf("total digit in number is %i",count);
}
