#include<stdio.h>
#include<conio.h>

main()
{int a,b,c,d;
 clrscr();
 printf("Enter Value of a,b,c,d :- ");
 scanf("%i%i%i%i",&a,&b,&c,&d);

 (a>b)
      ?(a>c)
	    ?(a>d)?printf("a is max")
		  :printf("d is max")
	    :(c>d)?printf("c is max")
		  :printf("d is max")
      :(b>c)
	    ?(b>d)?printf("b is max")
		  :printf("d is max")
	    :(c>d)?printf("c is max")
		  :printf("d is max") ;

 getch();
}