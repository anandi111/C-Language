#include<stdio.h>
main()
{
	int i,j,u;
	
	for(i=1,u=5;i<=5;i++,u--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%i",u);
		}
		printf("\n");
	}
}
