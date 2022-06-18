#include<stdio.h>
#include<conio.h>

main()
{const float PI = 3.14;
 int r;
 float c;

 clrscr();

 printf("Enter Radius :- ");
 scanf("%i",&r);

 c = 2*PI*r;

 printf("Parameter of Circle :- %.2f",c);

 getch();
}