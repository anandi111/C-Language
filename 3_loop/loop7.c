#include<stdio.h>

main()
{
	int n,i,a,sum=0,sum1=0,sum2=0;
	
	printf("Enter any number :- ");
	scanf("%i",&n);
	
	i=1;
	while(i<=n)
	{
		printf("%i\n",i);
		sum = sum + i;
		i++;
	}
	printf("Sum = %i\n",sum);
	
	printf("============\n");
	
	a=1;
	do
	{   sum1 = sum1 + a;
		printf("%i\n",a);
		a++;
	}while(a<=n);
	printf("Sum = %i\n",sum1);
	
	printf("============\n");
	
	for(i=1 ;i<=n ;i++ )
	 {
		printf("%i\n",i);
		sum2 = sum2 + i;
	 }
	 printf("Sum = %i\n",sum2);
}
