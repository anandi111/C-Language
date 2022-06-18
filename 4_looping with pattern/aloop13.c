#include<stdio.h>

main()
{
	int i,j,k,u,p;
	
	for(i=1,u=1;i<=5;i++,u++)
	{
		for(k=i;k<=5;k++)
		{
			printf(" ");
		}
		for(j=1,p=u;j<=i;j++,p--)
		{
			printf("%i",p);
		}
		printf("\n");
	}
}
