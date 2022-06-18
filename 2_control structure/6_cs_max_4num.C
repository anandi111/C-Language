#include<stdio.h>
#include<conio.h>

main()
{int a,b,c,d;
 clrscr();
 printf("Enter Value of a,b,c,d : ");
 scanf("%i%i%i%i",&a,&b,&c,&d);

 if(a>b)
 {
   if(a>c)
   {
     if(a>d)
     {
       printf("a is max.");
     }
     else
     {
       printf("d is max.");
     }
   }
   else
   {
     if(c>d)
     {
      printf("c is max");
     }
     else
     {
      printf("d is max");
     }
   }
 }
 else
 {
   if(b>c)
   {
     if(b>d)
     {
	printf("b is max");
     }
     else
     {
	printf("d is max");
     }
   }
   else
   {
     if(c>d)
     {
       printf("c is max");
     }
     else
     {
	printf("d is max");
     }
   }
 }

 getch();
}