#include<stdio.h>

main()
{
	int n,i,j,c=0;
	
	printf("Enter array size :- ");
	scanf("%i",&n);
	
	int a[n],b[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%i] :- ",i);
		scanf("%i",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		c=1;
		if(a[i]!=0)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					c++;
					a[j]=-1;	
				}
			}
			b[i]=c;
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
			printf("no %i : fre. %i\n",a[i],b[i]);
		}
	}
	
}
