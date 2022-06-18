#include<stdio.h>

main()
{
	int i,s,n,a;
	
	printf("Enter Number :- ");
	scanf("%i",&n);
	
	i=1;
	while(i<=10)
	{
		s=n*i;
		printf("%i * %i = %i\n",n,i,s);
		i++;
	}
	
    printf("============\n");
    
    a=1;
	do
	{
		s=n*a;
		printf("%i * %i = %i\n",n,a,s);
		a++;
	}while(a<=10);
	
    printf("============\n");
    
    for(i=1;i<=10;i++)
    {
       s=n*i;
	   printf("%i * %i = %i\n",n,i,s);	
	}
    
    
    
}
