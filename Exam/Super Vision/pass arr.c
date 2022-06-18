#include<stdio.h>

int sumofarr(int a[],int n)
{
	int i,sum=0;
	
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}

main()
{
	int a[100],i,n,sum;
	
	printf("Enter array size :- ");
	scanf("%i",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%i] = ",i);
		scanf("%i",&a[i]);
	}
	
	sum= sumofarr(a,n);
	
	printf("sum of all element = %i",sum);
	
}
