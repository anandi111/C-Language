//Write a C program to count the frequency of each character in a string.

#include<stdio.h>
#include<string.h>

main()
{
	char a[100];
	int b[100];
	char i,j,c;
	
	printf("enter any msg :- ");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{   c=1;
		if(a[i]!='-1')
		{
			for(j=i+1;a[j]!='\0';j++)
			{
				if(a[i]==a[j])
				{
					c++;
					a[j]='-1';
				}
	
			}
		b[i]=c;
	    }	
	}

	for(i=0;a[i]!='\0';i++)
	{		if(a[i]!='1')
			printf("%c => %i\n",a[i],b[i]);
	}
}
