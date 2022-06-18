#include<stdio.h>
#include<conio.h>

main()
{
 int c,f;
 clrscr();

 printf("Enter Tempreture (Celcius) : ");
 scanf("%i",&c);

 f = (9/5)*c+32;

 printf("Feranhit : %i ",f);

 getch();
}