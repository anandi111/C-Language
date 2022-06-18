#include<stdio.h>

main()
{
	int i,j,p;
	
	for(i=1;i<=5;i++)
	{
		p=1;
		for(j=i;j<=5;j++)
		{
			if(p%2!=0)
			{
			printf("1");	
			}
			else
			{
				printf("0");
			}
			p++;
		}
		printf("\n");
	}
}
