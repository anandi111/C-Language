#include<stdio.h>

main()
{
	  int r,c,i,j;
	  
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
			if(i==0||j==0)
			{
				printf("* ");
			}
			else if(i==r-1||j==c-1)
			{
			    printf("* ");	
			}
			else
			{
				printf("%i ",a[i][j]);
		
			}
			
		}
		printf("\n");
	  }
}
