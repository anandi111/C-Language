//write c program to convert string into toggelcase.

#include<stdio.h>

main()
{
	char a[100];
	int i;
	
	puts("Enter any msg :- ");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]>90)
		{
				printf("%c",a[i]-32);
		}
		else
		{
				printf("%c",a[i]+32);
		}
	}
}
