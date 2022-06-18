#include<stdio.h>
#include<conio.h>

main()
{int f,s,t;
 clrscr();

 printf("Enter Two angle of Triangle :");
 scanf("%i%i",&f,&s);

 t = 180 - (f+s);

 printf("Third angle of Triangle is %i",t);


 getch();
}