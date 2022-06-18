#include<stdio.h>

main()
{
	int i,j,k,p,u;
	
	for(i=1,u=1;i<=5;i++,u++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		p=u;
		for(j=i;j<=5;j++)
		{
			printf("%i",p);
			p++;
		}
		printf("\n");
	}
}
