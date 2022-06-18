// Write a C program to check whether a string is a palindrome or not..

#include<stdio.h>

main()
{
	char a[100],b[100];
	int i,flag=0;
	
	printf("enter any msg. :- ");
	gets(a);
	
	strcpy(b,a);
	
	printf("Reverce msg. :- %s\n",strrev(b));
	
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==b[i])
		{
			flag=1;
		}
	}
	
	if(flag==1)
		printf("msg. is palindrome.");
	else
		printf("msg. is  not palindrome.");
		
}
