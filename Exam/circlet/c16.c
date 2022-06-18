#include<stdio.h>
main()
{
	int i,j,p,u;
	
	for(i=1,u=1;i<=5;i++,u++)
	{
		for(j=1,p=u;j<=i;j++,p--)
		{
			printf("%i",p);
		}
		printf("\n");
	}
		for(i=1,u=4;i<=5;i++,u--)
	{
		for(j=i,p=u;j<5;j++,p--)
		{
			printf("%i",p);
		}
		printf("\n");
	}
}
