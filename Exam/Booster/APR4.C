#include<stdio.h>
#include<conio.h>

main()
{
 int bs,hra,da,ta,s;
 clrscr();

 printf("Enter Base Salary : ");
 scanf("%i",&bs);

 hra = bs*10/100;
 da = bs*5/100;
 ta = bs*8/100;
 s = bs+hra+da+ta;

 printf("Gross Salary is %i",s);

 getch();
}