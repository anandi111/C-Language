#include<stdio.h>
#include<conio.h>

main()
{
 int r;
 const float PI = 3.14;
 float v;
 clrscr();

 printf("Enter Radius :");
 scanf("%i",&r);

 v = (1.33*PI)*(r*r*r);

 printf("Volume of Sphere is %.2f",v);


 getch();
}