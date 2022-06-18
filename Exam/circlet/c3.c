#include<stdio.h>
main()
{
	int i,j,p;
	
	for(i=1;i<=5;i++)
	{
		for(j=1,p=5;j<=i;j++,p--)
		{
			printf("%i",p);
		}
		printf("\n");
	}
}
