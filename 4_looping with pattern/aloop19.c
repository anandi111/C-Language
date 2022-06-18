#include<stdio.h>

main()
{
	int i,j,p;
	
	for(i=1;i<=5;i++)
	{
		for(j=i,p=1;j<=5;j++,p++)
		{
			printf("%i",p);
		}
		printf("\n");
	}
	printf("Anandi\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%i",j);
		}
		printf("\n");
	}
}
