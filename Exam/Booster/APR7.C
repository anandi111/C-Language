#include<stdio.h>
#include<conio.h>

main()
{int h,m,hm,s;
 clrscr();

 printf("Enter Hours and Minutes :");
 scanf("%i%i",&h,&m);

 hm = h*60;
 s = hm+m;

 printf("Total Minutus is %i",s);


 getch();
}