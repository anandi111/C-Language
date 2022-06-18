#include<stdio.h>
#include<conio.h>

main()
{
 int k;
 float m;
 clrscr();

 printf("Enter Kilometer :");
 scanf("%i",&k);

 m = k*0.621;

 printf("Miles = %.2f",m);

 getch();
}