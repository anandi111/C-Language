// write c program to print all negative elements in an array.

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
			if(a[i][j]<0)
	        	printf("%i ",a[i][j]);
	        		
	    	else
	    		printf("* ");
     	}
		printf("\n");
	}
	
}
