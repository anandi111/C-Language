//Write C program to left rotate and right rotate an array

#include<stdio.h>

main()
{
	int n,i,j,temp;
	
	printf("how many rows :- ");
	scanf("%i",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%i] :- ",i);
	    scanf("%i",&a[i]);
	}
	
	printf("\n\n--------------\n\n");
	
	for(i=0;i<n;i++)
	{
	    printf("%i ",a[i]);
	}
	temp = a[0];
	
	printf("\n\n--------------\n\n");
	
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	    	a[i]=a[j];
	    	if(i==n-1)
	    	{
	    		a[i]=temp;
	    		
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
	    printf("%i ",a[i]);
	}
}
