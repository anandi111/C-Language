//write c program to find special symbols in given string.

#include<stdio.h>

main()
{
	char a[100];
	int i,c=0;
	
	printf("Enter any msg :- ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0'&&a[i]<='9'||
		   a[i]>='a'&&a[i]<='z'||
		   a[i]>='A'&&a[i]<='Z')
		{
		}
		else
		{
			c=1;
		}
	}
	
	if(c==1)
		printf("yes, There is special symbols.");
	else
		printf("No, There is no special symbols.");	
}
