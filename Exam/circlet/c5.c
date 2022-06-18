#include<stdio.h>
main()
{
	int i,j,p;
	
	for(i=1;i<=5;i++)
	{
		for(j=i,p=5;j<=5;j++,p--)
		{
			printf("%i",p);
		}
		printf("\n");
	}
}
