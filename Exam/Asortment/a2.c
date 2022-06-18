#include<stdio.h>

main()
{
	int n,i,fbig,sbig,temp;
	
	printf("Enter array size :- ");
	scanf("%i",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%i] :- ",i);
		scanf("%i",&a[i]);
	}
	
	fbig=a[0];
	sbig=a[1];
	
	if(sbig>fbig)
	{
		temp=sbig;
		sbig=fbig;
		fbig=temp;
	}
	
	for(i=2;i<n;i++)
	{
		if(a[i]>fbig)
		{
			sbig=fbig;
			fbig=a[i];
		}
		else if(a[i]>sbig)
		{
			sbig=a[i];
		}
		
	}
	
	printf("first biggest no. is %i\nsecond biggest no. is %i",fbig,sbig);
}
