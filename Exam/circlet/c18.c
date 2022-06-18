#include<stdio.h>
main()
{
	int i,j,u,p,k;
	
	for(i=1,u=1;i<=5;i++,u++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%i",j);
		}
		for(k=i;k<5;k++)
		{
			printf("  ");
		}
		for(j=1,p=u;j<=i;j++,p--)
		{
			printf("%i",p);
		}
		printf("\n");
		
	}

}
