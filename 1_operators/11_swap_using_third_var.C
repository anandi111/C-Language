#include<stdio.h>
#include<conio.h>

main()
{int a,b,c;

 clrscr();

 printf("Enter Value of A :- ");
 scanf("%i",&a);
 printf("Enter Value of B :- ");
 scanf("%i",&b);

 c = a;
 a = b;
 b = c;

 printf("a = %i\n",a);
 printf("b = %i",b);

 getch();
}