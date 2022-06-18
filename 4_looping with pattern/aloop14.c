#include<stdio.h>

main()
{
	int i,j,k,p;
	
	for(i=1;i<=5;i++)
	{
		for(k=i;k<=5;k++)
		{
			printf(" ");
		}
		for(j=1,p=1;j<=i;j++,p++)
		{
			if(p%2!=0)
			{
				printf("A");
			}
			else
			{
				printf("B");
			}
		}
		printf("\n");
	}
}
