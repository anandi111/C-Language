#include<stdio.h>

main()
{
	int i,j,p=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%i",p);
			p++;
		}
		printf("\n");
	}
}
