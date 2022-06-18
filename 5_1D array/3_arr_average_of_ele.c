#include<stdio.h>

main()
{
	int n;
	
	printf("enter array size :- ");
	scanf("%i",&n);
	
	int a[n];
	int i,count=0,sum=0,ave;
	
	for(i=0;i<n;i++)
	{
		printf("a[%i] : ",i);
		scanf("%i",&a[i]);
		count++;
		sum=sum+a[i];
		
	}
	
	printf("\n\n------------\n\n");
	
	ave = sum/count;
	
	printf("Average of array element is %i",ave);
}
