#include<stdio.h>

main()
{
	int i,j,p,u;
	
	for(i=1,u=1;i<=5;i++,u++)
	{   
	     p=u;
		for(j=1;j<=i;j++)
		{
			printf("%i",p);
			p--;
		}
		printf("\n");
	}
}
