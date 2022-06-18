// write c program to matrix convert into transpose matrix.

#include<stdio.h>

main()
{
	int r,c,i,j;
	
	printf("how many rows :- ");
	scanf("%i",&r);
	printf("how many cols :- ");
	scanf("%i",&c);
	
	int a[r][c];

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%i][%i] :- ",i,j);
	        scanf("%i",&a[i][j]);
		}
	}
	
	printf("\n\n--------------\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
	        printf("%i ",a[i][j]);
     	}
		printf("\n");
	}
	
	printf("\n\n--------------\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
	        printf("%i ",a[j][i]);
     	}
		printf("\n");
	}
	
}
