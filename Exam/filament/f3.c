 //Write a C program to remove spaces, blanks from a string
 
#include<stdio.h>

main()
{
	char a[100];
	int i,j,k=0;
	
	printf("enter any msg. :- ");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		a[i]=a[i+k];
		
		if(a[i]==' '||a[j]=='\t')
		{
			k++;
			i--;
		}
	}
	
	printf("after removing all spaces :-\n");
	puts(a);
	
}
