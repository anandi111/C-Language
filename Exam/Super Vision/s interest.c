#include<stdio.h>

int simpleinterest(int p, int r, int n)
{
	int sum;
	sum=(p*r*n)/100;
	return sum;
}

main()
{
	int p,r,n,ans;
	
	printf("Enter Amount :- ");
	scanf("%i",&p);
	printf("Enter Rate :- ");
	scanf("%i",&r);
	printf("Enter Time limit :- ");
	scanf("%i",&n);
	
	ans = simpleinterest(p,r,n);
	
	printf("Simple Interest = %i",ans);
}
