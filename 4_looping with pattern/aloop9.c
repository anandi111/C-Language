#include<stdio.h>

main()
{
	int i,j,k,p;
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=i,p=5;j<=5;j++,p--)
		{
			printf("%i",p);
		}
		printf("\n");
	}
}
