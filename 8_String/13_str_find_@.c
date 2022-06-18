//write c program to find @ symbols in given string.

#include<stdio.h>

main()
{
	char a[100];
	int i,c=0;
	
	printf("Enter any msg :- ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='@')
		{
			c=1;
		}
	}
	
	if(c==1)
		printf("yes, There is @.");
	else
		printf("No, There is no @.");	
}
