#include<stdio.h>

main()
{
	int n;
	
	printf("enter array size :- ");
	scanf("%i",&n);
	
	int a[n];
	int i,count =0;
	
	for(i=0;i<n;i++)
	{
		printf("a[%i] : ",i);
		scanf("%i",&a[i]);
		count++;
	}
	
	printf("\n\n------------\n\n");
	
	printf("Total length of array is %i",count);
}
