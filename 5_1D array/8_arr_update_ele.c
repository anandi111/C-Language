#include<stdio.h>
main()
{
	int i,n,pos,num;
	
	printf("Enter Array size :");
	scanf("%d",&n);
	
	printf("Enter elements :\n\n");
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter position :");
	scanf("%d",&pos);
	
	printf("Enter New element :");
	scanf("%d",&num);	
	
	// logic
	
	a[pos]=num;
	
	
	printf("\n\nNew array is :\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		printf("%d \n",a[i]);
	}
	
	
}

