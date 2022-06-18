#include<stdio.h>

main()
{
	  int r,c,i,j,sum=0;
	  
	  printf("Enter rows number :- ");
	  scanf("%i",&r);
	  printf("Enter cloumns number :- ");
	  scanf("%i",&c);
	  printf("\n");
	  
	  int a[r][c];
	  
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<c;j++)
		{
			printf("a[%i][%i] :- ",i,j);
			scanf("%i",&a[i][j]);
		}
	  }
	  
	  printf("\n\n-----------------\n\n");
	  
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<c;j++)
		{
			printf(" %i",a[i][j]);
			
			sum = sum + a[i][j];
			
		}
		printf("\n");
	  }
	  
	  printf("\n\n-----------------\n\n");
	  
	  printf("Sum of all elements is %i",sum);
}
