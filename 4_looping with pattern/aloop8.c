#include<stdio.h>

main()
{
	int i,j,k,p,u;
	
	for(i=1,u=5;i<=5;i++,u--)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=i,p=u;j<=5;j++,p--)
		{
			printf("%i",p);
		}
		printf("\n");
	}
}
