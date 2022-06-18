#include<stdio.h>
#include<conio.h>

main()
{int a;
 clrscr();

 printf("Enter Your Age :- ");
 scanf("%i",&a);

 if(a==18)
 {
  printf("You are capable for vote.");
 }
 else if(a>18)
 {
   printf("You are also capable for vote.");
 }
 else
 {
  printf("You are not capable for vote.");
 }

 getch();
}