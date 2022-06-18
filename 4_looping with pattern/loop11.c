#include<stdio.h>

main()
{
	int i,j,u,p;
	
	for(i=1,u=1;i<=5;i++,u++)
	{
		p=u;
		for(j=i;j<=5;j++)
		{
			printf("%i",p);
			p++;
		}
		printf("\n");
	}
}
