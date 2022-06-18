#include<stdio.h>
#include<string.h>

main()
{
	char a[100];
	char b[100];
	int i,fact;
	
	printf("enter any msg. :- ");
	gets(a);
	
	strcpy(b,a);
	
	strrev(b);
	
	puts(b);
	
	
//	
//	for(i=0;a[i]!=NULL;i++)
//	{
//	if(a[i]==b[i])
//	{
//		fact=0;
//	}
//	else
//	{
//		fact=1;
//	}
//	}
	
	if(strcmp(b,a)==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
