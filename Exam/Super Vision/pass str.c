#include<stdio.h>

int sumofarr(char *a)
{
	int sum,i;
	
	for(i=0;a[i]!=NULL;i++)
	{
		sum++;
	}
	return sum;
}

main()
{
	char a[100];
	int s;
	
	printf("Enter any msg. :- ");
	gets(a);
	
	s= sumofarr(a);
	
	printf("Length = %i",s);
	
}
