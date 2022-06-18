#include<stdio.h>

main()
{
	int n;
	
	printf("enter array size :- ");
	scanf("%i",&n);
	
	int a[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("a[%i] : ",i);
		scanf("%i",&a[i]);
		
	}
	
	printf("\n\n============\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%i] => %i\n",i,a[i]);
	}
	
}
