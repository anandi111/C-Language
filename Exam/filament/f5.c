//Write a C program to check if a given string is a valid password or not by satisfying given criteria:
//a. A password must be at least 6 characters long.
//b. A password must contain at least one alphabet, one digit, and a special character.
//c. Confirmation password feature must be available for double-checking.
//Print Valid Password if a password satisfies all given criteria, otherwise print Invalid Password.

#include<stdio.h>

main()
{
	char a[100],b[100];
	int i,s=0,c=0,se=0,d=0,l;

	printf("enter password :- ");	
	gets(a);
	
	l=strlen(a);
	
	if(l==6)
	{
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			s++;
		}
		else if(a[i]>='A'&&a[i]<='V')
		{
			c++;
		}
		else if(a[i]>='0'&&a[i]<='9')
		{
			d++;
		}
		else 
		{
			se++;
		}

	}
	
	if(se>=1&&d>=1)
	{
		printf("enter confirm password :- ");
		gets(b);
		
		if(strcmp(a,b)==0)
		{
			printf("password is valid");
		}
		else
		{
			printf("confirm pass. is wrong.");
		}
	}
	else
	{
		printf("pass. must have 1 digit and 1 special char");
	}
    }
    else
    {
    	printf("pass. must be 6 character");
	}
	
}

