#include<stdio.h>

main()
{
	int n,ld,s1,s2,s3;
	
	printf("enter 3 digit number :-");
	scanf("%i",&n);
	
	ld = n%10;
	s1=n/10;
	s2=s1/10;
	s3=s1%10;
	
	printf("Reverse number is %i%i%i",ld,s3,s2);
}
