#include<stdio.h>
#include<conio.h>

main()
{int d,t,v;
 clrscr();

 printf("Enter Distance :");
 scanf("%i",&d);
 printf("Enter Time :");
 scanf("%i",&t);

 v = d/t;

 printf("Velocirty is %i",v);


 getch();
}