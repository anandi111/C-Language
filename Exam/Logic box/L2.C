#include<stdio.h>
#include<conio.h>

main()
{int a;
 clrscr();
 printf("Enter any number :- ");
 scanf("%i",&a);

 (a%2==0)?printf("Number is even")
	 :printf("Number is odd");

 getch();
}