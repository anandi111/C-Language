#include<stdio.h>

main()
{
	int i,j,k,p;
	
	for(i=1,p=5;i<=5;i++,p--)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("%i",p);
		}
		printf("\n");
	}
}
