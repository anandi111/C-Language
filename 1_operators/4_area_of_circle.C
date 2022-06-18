#include<stdio.h>
#include<conio.h>

main()
{const float PI = 3.14;
 int r;
 float c;

 clrscr();

 printf("Enter Radius :- ");
 scanf("%i",&r);

 c = PI*r*r;

 printf("Area of Circle :- %.2f",c);

 getch();
}