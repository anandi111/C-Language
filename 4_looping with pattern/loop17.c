#include<stdio.h>

main()
{
	char i,j;
	
	for(i='A';i<='D';i++)
	{
		for(j=i;j<='D';j++)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
}
