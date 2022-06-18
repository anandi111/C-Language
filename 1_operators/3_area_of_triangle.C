#include<stdio.h>
#include<conio.h>

main()
{int b,h;
float t;

 clrscr();

 printf("Enter Base :- ");
 scanf("%i",&b);
 printf("Enter Hight :- ");
 scanf("%i",&h);

 t = 0.5*b*h;

 printf("Area of triangle :- %.2f",t);

 getch();
}