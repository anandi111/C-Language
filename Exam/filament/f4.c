//Write a C program to remove all repeated characters in a string

#include<stdio.h>
#include<string.h>

main()
{
	
	char a[100];
	char b[100];
	int i,j,k;
	
	printf("enter any msg :- ");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		for(j=i+1;a[j]!=NULL;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;a[k]!=NULL;k++)
				{
					a[k]=a[k+1];	
				}
			}
		}
		
	}
	
	for(i=0;a[i]!=NULL;i++)
	{
		printf("%c",a[i]);
	}
	
}
