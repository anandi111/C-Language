#include<stdio.h>

main()
{
	int n,i,a;
	
	printf("Enter any number :- ");
	scanf("%i",&n);
	
	i=1;
	while(i<=n)
	{
		printf("%i\n",i);
		i++;
	}
	
	printf("============\n");
	
	a=1;
	do
	{
		printf("%i\n",a);
		a++;
	}while(a<=n);
	
	printf("============\n");
	
	for(i=1 ;i<=n ;i++ )
	 {
		printf("%i\n",i);
	 }
}
