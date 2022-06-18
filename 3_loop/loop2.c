#include<stdio.h>

main()
{
	int i=10,b=10;
	while(i >=1)
	{
		printf("%d\n",i);
		i--;
	}
	
	printf("============\n");

	for (i=10; i>=1; i--)
	{
		printf("%i\n",i);
	}
	
	printf("============\n");
	
	do{
		printf("%i\n",b);
		b--;
	}while(b >= 1);
	
}
