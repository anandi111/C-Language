#include<stdio.h>

main()
{
	int i,a;
	
	i=2000;
	while(i<=3000)
	{
		if(i%4==0)
		{
			printf("%i\n",i);
		}
		i++;
	}
	
    printf("============\n");
    
    a=2000;

    do	{
		if(a%4==0)
		{
			printf("%i\n",a);
		}
		a++;
	}while(a<=3000);
	
    printf("============\n");
	
	for(i=2000;i<=3000;i++)
	{
	   if(i%4==0)
		{
			printf("%i\n",i);
		}	
	}
		
}
