#include<stdio.h>

main()
{
	int i,j,k,l,p,u;
	
	for(i=1,u=5;i<=5;i++,u--)
	{
		for(j=i,p=1;j<=5;j++,p++)
		{
			printf("%i",p); 
		}
		for(k=1;k<i;k++)
		{
			printf("  ");
		}
		for(l=i,p=u;l<=5;l++,p--)
		{
			printf("%i",p);
		}
		printf("\n");
	}
}
