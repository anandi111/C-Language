#include<stdio.h>

main()
{
	int i=1,b=1;
	while(i <= 10)
	{
		printf("%d\n",i);
		i++;
	}
	
	printf("============\n");

	for (i=1; i<=10; i++)
	{
		printf("%i\n",i);
	}
	
	printf("============\n");
	
	do{
		printf("%i\n",b);
		b++;
	}while(b <=10);
	
}
