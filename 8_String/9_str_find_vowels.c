//write c program to find vowels in given string.

#include<stdio.h>

main()
{
	char a[100];
	//char b[10]={'a','A','e','E','i','I','o','O','u','U'};
	int i,c=0;
	
	printf("Enter any msg :- ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||
		   a[i]=='A'||
		   a[i]=='e'||
		   a[i]=='E'||
		   a[i]=='i'||
		   a[i]=='I'||
		   a[i]=='o'||
		   a[i]=='O'||
		   a[i]=='u'||
		   a[i]=='U')
		 //  if(a[i]==b[i])
		{
			c=1;
		}
	}
	
	if(c==1)
		printf("yes, There is vowels.");
	else
		printf("No, There is no vowels.");	
}
