#include<stdio.h>

main()
{
	int i,a,s=1,s1=1,s2=1,n;
	
	printf("Enter Number :- ");
	scanf("%i",&n);
	
	i=1;
	while(i<=n)
	{
		s=s*i;
		i++;
	}
	printf("%i! = %i\n",n,s);
	
    printf("============\n");
    
    a=1;
	do
	{
		s1=s1*a;
		a++;
	}while(a<=n);
	printf("%i! = %i\n",n,s1);
	
    printf("============\n");
    
    for(i=1;i<=n;i++)
    {
    	s2=s2*i;
    	
	}
	printf("%i! = %i",n,s2);	
		
}
