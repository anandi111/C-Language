#include<stdio.h>
#include<conio.h>

main()
{int x,y,s;

 clrscr();

 printf("Enter Value of X :- ");
 scanf("%i",&x);
 printf("Enter Value of Y :- ");
 scanf("%i",&y);

 s = (x*x*x) + (3*x*x*y) + (3*x*y*y) + (y*y*y);

 printf("(%i + %i)^3 = %i",x,y,s);

 getch();
}