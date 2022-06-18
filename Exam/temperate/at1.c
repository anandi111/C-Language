#include<stdio.h>

main()
{
	char a;
	
	a = 'A';
	do
	{
		printf("%c\t",a);
		a++;
	}while(a<='Z');
}
