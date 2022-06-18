//write c program to find given string is palindrome or not.

#include<stdio.h>

main()
{
	char a[100],b[100];
	int i,c=0;
	
	printf("Enter any msg :- ");
	gets(a);
	
	strcpy(b,a);
	
	printf("reverce os msg is %s\n",strrev(b));
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b[i])
		{
			c=1;
		}

	}
	
	if(c==1)
		printf("yes, string is palindrome.");
	else
		printf("No, string is not palindrome.");	
}
