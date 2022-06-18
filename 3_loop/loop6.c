#include<stdio.h>

main()
{
	int a,i,n;
	
	printf("Enter Number :- ");
	scanf("%i",&n);
	
	i=n;
	while(i>=1)
	{
		if(i%2==0)
		{
			printf("%i\n",i);
		}
		i--;
	}
	
	printf("============\n");
	
	a=n;
	do
	{
		if(a%2==0)
		{
			printf("%i\n",a);
		}
		a--;
	}while(a>=1);
	
	printf("============\n");
	
	for(i=n;i>=1;i--)
	{
		if(i%2==0)
		{
			printf("%i\n",i);
		}	
	}
	
}
