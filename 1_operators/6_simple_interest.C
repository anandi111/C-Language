#include<stdio.h>
#include<conio.h>

main()
{int p,r,t,si;

 clrscr();

 printf("Enter Prise :- ");
 scanf("%i",&p);
 printf("Enter Rate :- ");
 scanf("%i",&r);
 printf("Enter Time :- ");
 scanf("%i",&t);

 si = (p*r*t)/100;

 printf("Simple interest :- %i",t);

 getch();
}