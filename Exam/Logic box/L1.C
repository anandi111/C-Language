#include<stdio.h>
#include<conio.h>

main()
{char a;
 clrscr();

 printf("Enter Any character :- ");
 scanf("%c",&a);

 if((a >= 'a'&& a <= 'z')||(a >= 'A'&& a<= 'Z'))
 {
  printf("It is Alphabet");
 }
 else if(a >= '0' && a <= '9' )
 {
  printf("It is digit");
 }
 else
 {
  printf("It is special character");
 }

 getch();
}