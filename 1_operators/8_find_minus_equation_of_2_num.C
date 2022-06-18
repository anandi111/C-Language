#include<stdio.h>
#include<conio.h>

main()
{int x,y,s;

 clrscr();

 printf("Enter Value of X :- ");
 scanf("%i",&x);
 printf("Enter Value of Y :- ");
 scanf("%i",&y);

 s = (x*x) - (2*x*y) + (y*y);

 printf("(%i - %i)^2 = %i",x,y,s);

 getch();
}