#include<stdio.h>

main()
{
 	int n1,n2,i;
	 
	printf("Enter n1 :- ");
	scanf("%i",&n1);
	printf("Enter n2 :- ");
	scanf("%i",&n2);
	
	int a[n1],b[n2],c[n1+n2];
	
	for(i=0;i<n1;i++)
	{
		printf("a[%i] => ",i);
		scanf("%i",&a[i]);
		c[i]=a[i];
	}
	
	printf("\n\n--------------\n\n");
	
	for(i=0;i<n2;i++)
	{
		printf("b[%i] => ",i);
		scanf("%i",&b[i]);
		c[n1+i]=b[i];
	}
	
	printf("\n\n--------------\n\n");
	
	for(i=0;i<n1+n2;i++)
	{
		printf("c[%i] => %i\n ",i,c[i]);
	}			
}
