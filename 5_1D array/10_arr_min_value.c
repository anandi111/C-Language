#include<stdio.h>

main()
{
	int n;
	
	printf("Enter array size :- ");
	scanf("%i",&n);
	
	int a[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("a[%i] :- ",i);
		scanf("%i",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]<a[0])
		{
			a[0]=a[i];
		}
	}
	
	printf("min ele is %i",a[0]);
}
