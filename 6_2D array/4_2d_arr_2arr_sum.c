#include<stdio.h>

main()
{
	  int r1,c1,r2,c2,i,j;
	  
	  printf("Enter rows number 1:- ");
	  scanf("%i",&r1);
	  printf("Enter cloumns number 1:- ");
	  scanf("%i",&c1);
	  printf("Enter rows number 2:- ");
	  scanf("%i",&r2);
	  printf("Enter cloumns number 2:- ");
	  scanf("%i",&c2);
	  printf("\n");
	  
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
	  
	  printf("\n\n-----------------\n\n");
	  printf("Matrix A\n");
	  
	  for(i=0;i<r2;i++)
	  {
	  	for(j=0;j<c2;j++)
		{
			printf(" %i",a[i][j]);
			
		}
		printf("\n");
	  }
	  
	  printf("\n\n-----------------\n\n");
	  
	  for(i=0;i<r2;i++)
	  {
	  	for(j=0;j<c2;j++)
		{
			printf("a[%i][%i] :- ",i,j);
			scanf("%i",&b[i][j]);
		}
	  }
	  
	  printf("\n\n-----------------\n\n");
	  printf("Matrix B\n");
	  
	  for(i=0;i<r2;i++)
	  {
	  	for(j=0;j<c2;j++)
		{
			printf(" %i",b[i][j]);
			
		}
		printf("\n");
	  }
	  
	  printf("\n\n-----------------\n\n");
	  if(r1==r2||c1==c2)
	  {
	  
	  printf("Matrix Sum\n");
	  
	  for(i=0;i<r1;i++)
	  {
	  	for(j=0;j<c1;j++)
		{
			c[i][j] =a[i][j] + b[i][j];
			printf(" %i",c[i][j]);
			
		}
		printf("\n");
	  }
     }
     else
     {
     	printf("r1 & c1 != r2 & c2");
	 }
}
