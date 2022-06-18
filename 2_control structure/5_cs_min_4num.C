#include<stdio.h>
#include<conio.h>

main()
{int a,b,c,d;
 clrscr();
 printf("Enter Value of a,b,c,d : ");
 scanf("%i%i%i%i",&a,&b,&c,&d);

 if(a<b)
 {
   if(a<c)
   {
     if(a<d)
     {
       printf("a is min.");
     }
     else
     {
       printf("d is min.");
     }
   }
   else
   {
     if(c<d)
     {
      printf("c is min");
     }
     else
     {
      printf("d is min");
     }
   }
 }
 else
 {
   if(b<c)
   {
     if(b<d)
     {
	printf("b is min");
     }
     else
     {
	printf("d is min");
     }
   }
   else
   {
     if(c<d)
     {
       printf("c is min");
     }
     else
     {
	printf("d is min");
     }
   }
 }

 getch();
}