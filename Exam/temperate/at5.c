#include<stdio.h>

main()
{
	int n,i,j,sum;
	
	printf("Enter Number :-");
	scanf("%i",&n);
	
	for(i=2;i<=n;i++)
	{
	  sum=(i-1)+(i-2);
	  printf(" %i\n",sum);
	}
}
