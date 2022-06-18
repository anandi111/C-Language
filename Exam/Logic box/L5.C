#include<stdio.h>
#include<conio.h>

main()
{int a;
 int b,c,t;
 clrscr();
 printf("Enter your electricity unit :- ");
 scanf("%i",&a);

 if(a <= 50)
 {
   c = a * 0.50;
 }
 else if(a <= 1000)
 {
  c = 25 + (a-50) * 0.75;
 }
 t = c * 0.20;
 printf("your total electricity bill is %i",t);

 getch();
}