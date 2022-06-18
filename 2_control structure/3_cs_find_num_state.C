#include<stdio.h>
#include<conio.h>

main()
{int a;
 clrscr();

 printf("Enter Value of A :- ");
 scanf("%i",&a);

 if(a==0)
 {
  printf("A is nutral.");
 }
 else if(a<0)
 {
   printf("A is negative.");
 }
 else
 {
  printf("A is positive.");
 }

 getch();
}