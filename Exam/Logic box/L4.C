#include<stdio.h>
#include<conio.h>

main()
{ char a;
 clrscr();
 printf("Enter first character of month :- ");
 scanf("%c",&a);
 switch(a)
 {
   case'J':
	   printf("January");
	   break;
   case'F':
	   printf("February");
	   break;
   case'M':
	   printf("March");
	   break;
   case'A':
	   printf("April");
	   break;
   case'm':
	   printf("May");
	   break;
   case'j':
	   printf("June");
	   break;
   case'i':
	   printf("July");
	   break;
   case'a':
	   printf("August");
	   break;
   case'S':
	   printf("September");
	   break;
   case'O':
	   printf("Octomber");
	   break;
   case'N':
	   printf("November");
	   break;
   case'D':
	   printf("December");
	   break;
   default:
	   printf("Invalid char...");
}

 getch();
}