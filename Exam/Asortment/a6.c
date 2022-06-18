// write c program to addition of two matrix.

#include<stdio.h>

main()
{
	int r1,c1,i,j,r2,c2;
	
	printf("how many rows 1 :- ");
	scanf("%i",&r1);
	printf("how many cols 1 :- ");
	scanf("%i",&c1);
	printf("how many rows 2 :- ");
	scanf("%i",&r2);
	printf("how many cols 2 :- ");
	scanf("%i",&c2);
	
	int a[r1][c1];
	int b[r2][c2];
	int c[r1][c1];
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("a[%i][%i] :- ",i,j);
	        scanf("%i",&a[i][j]);
		}
	}
	
	printf("\n\n--------------\n\n");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
	        	printf("%i ",a[i][j]);
     	}
		printf("\n");
	}
	
	printf("\n\n--------------\n\n");
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("b[%i][%i] :- ",i,j);
	        scanf("%i",&b[i][j]);
		}
	}
	
	printf("\n\n--------------\n\n");
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
	        printf("%i ",b[i][j]);		
     	}
		printf("\n");
	}
	
	printf("\n\n--------------\n\n");
	
	if(r1==r2&&c1==c2)
	{
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j] = a[i][j] + b[i][j];
		        printf("%i ",c[i][j]);		
	     	}
			printf("\n");
		}
	}
	else
	{
		printf("matrix A and matrix B is not same.");
	}
	
}
