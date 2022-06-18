#include<stdio.h>
#include<conio.h>

main()
{int a,b;
 clrscr();

 printf("Enter First Number :-");
 scanf("%i",&a);
 printf("Enter Second Number :-");
 scanf("%i",&b);

 (a<b)
 ?printf("%i is min.",a)
 :printf("%i is min.",b);

 getch();
}