#include<stdio.h>

int calculator(int n1, int n2)
{
	int c,sum,i;
	for(i=1;i<=100;i++)
	{	
	printf("\n\n-------MENU-------\n");
	printf("press 1 for addition\n");
	printf("press 2 for substraction\n");
	printf("press 3 for multiplication\n");
	printf("press 4 for divition\n");
	printf("press 5 for modulus\n");
	printf("press 0 for exit\n");
	
	printf("Enter your choice :- ");
	scanf("%i",&c);
	printf("\n");
	
	switch(c)
	{
		case 1 : printf("Addition of %i & %i is :",n1,n2);
		         sum = n1+n2;
		         printf("%i",sum);
		         break;
		
		case 2 : printf("Substraction of %i & %i is :",n1,n2);
		         sum= n1-n2;
		         printf("%i",sum);
		         break;
		         
		case 3 : printf("Multiplication of %i & %i is :",n1,n2);
		         sum= n1*n2;
		         printf("%i",sum);
		         break;         
		 
		case 4 : printf("Division of %i & %i is :",n1,n2);
		         sum= n1/n2;
		         printf("%i",sum);
		         break;
				 
		case 5 : printf("Modulas of %i & %i is :",n1,n2);
		         sum= n1%n2;
		         printf("%i",sum);
		         break;
				 
		case 0 : 
		        exit(0);
				break;
		
		default : printf("Invalid Choice...");
		        
	}

    }
	
	
	
}

main()
{
	int a,b,i;
	
	printf("enter value of A :- ");
	scanf("%i",&a);
	printf("enter value of B :- ");
	scanf("%i",&b);
	
	calculator(a,b);

}
