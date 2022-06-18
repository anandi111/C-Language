// write c program to find sum of diagonal elements in an array.

#include<stdio.h>

main()
{
	int r,c,i,j,sum=0;
	
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
	
	if(r==c)
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i==j)
				{
					printf("%i ",a[i][j]);
					sum = sum + a[i][j];
				}
		        	
		        		
		    	else
		    		printf("  ");
	     	}
			printf("\n");
		}

	printf("\n\nSum of diagonal element is %i",sum);
   
    }
    else
    {
    	printf("this is not square matrix.");
	}
	
}
