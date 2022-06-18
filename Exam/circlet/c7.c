#include<stdio.h>
main()
{
	int i,j,p,u;
	
	for(i=1,u=1;i<=5;i++,u++)
	{
		for(j=i,p=u;j<=5;j++,p++)
		{
			printf("%i",p);
		}
		printf("\n");
	}
}
