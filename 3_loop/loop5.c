#include<stdio.h>

main()
{
	int n,i,a;
	
	printf("Enter any number :- ");
	scanf("%i",&n);
	
	i=1;
	while(i<=n)
	{
		if(i%2!=0)
		{
	     	printf("%i\n",i);
	    }
		i++;
	}
	
	printf("============\n");
	
	a=1;
	do
	{    if(a%2!=0)
		{
	     	printf("%i\n",a);
	    }
		
		a++;
	}while(a<=n);
	
	printf("============\n");
	
	for(i=1 ;i<=n ;i++ )
	 {
		if(i%2!=0)
		{
	     	printf("%i\n",i);
	    }
	 }
}
