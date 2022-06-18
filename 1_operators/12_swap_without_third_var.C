#include<stdio.h>
#include<conio.h>

main()
{int a,b;

 clrscr();

 printf("Enter Value of A :- ");
 scanf("%i",&a);
 printf("Enter Value of B :- ");
 scanf("%i",&b);

 a += b;
 b = a-b;
 a = a-b;

 printf("a = %i\n",a);
 printf("b = %i",b);

 getch();
}