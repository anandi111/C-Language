//write c program to convert character into toggelcase.

#include<stdio.h>

main()
{
	char n;
	
	printf("Enter character :- ");
	scanf("%c",&n);
	
	if(n>90)
	{
		printf("Uppercase :- %c",n-32);
	}
	else
	{
		printf("Lowercase :- %c",n+32);
	}
	
}
