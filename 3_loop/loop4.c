#include<stdio.h>

main()
{
	int a,i,n;
	
	printf("Enter Number :- ");
	scanf("%i",&n);
	
	i=n;
	while(i>=1)
	{
		printf("%i\n",i);
		i--;
	}
	
	printf("============\n");
	
	a=n;
	do
	{
		printf("%i\n",a);
		a--;
	}while(a>=1);
	
	printf("============\n");
	
	for(i=n;i>=1;i--)
	{
		printf("%i\n",i);	
	}
	
}
