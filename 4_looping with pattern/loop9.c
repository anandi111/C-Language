#include<stdio.h>

main()
{
	int i,j,p;
	
	for(i=1;i<=5;i++)
	{
		p=1;
		for(j=i;j<=5;j++)
		{
			printf("%i",p);
			p++;
		}
		printf("\n");
	}
}
