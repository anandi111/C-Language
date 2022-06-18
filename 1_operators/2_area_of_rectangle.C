#include<stdio.h>
#include<conio.h>

main()
{int l,h,r;

 clrscr();

 printf("Enter Length :- ");
 scanf("%i",&l);
 printf("Enter Hight :- ");
 scanf("%i",&h);

 r = l*h;

 printf("Area of Rectangle :- %i",r);

 getch();
}