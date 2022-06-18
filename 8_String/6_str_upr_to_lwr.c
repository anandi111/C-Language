//write c program to convert string into lowercase.

#include<stdio.h>

main()
{
	char a[100];
	int i;
	
	puts("Enter uppercase :- ");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		printf("%c",a[i]+32);
	}
}
