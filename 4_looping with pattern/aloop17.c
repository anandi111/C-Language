#include<stdio.h>

main()
{
	int i,j,k,p=1;
	
	for(i=1;i<=5;i++)
	{
		for(k=i;k<=5;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%i ",p);
			p++;
		}
		printf("\n");
	}
}
