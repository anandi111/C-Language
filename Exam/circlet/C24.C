#include<stdio.h>
#include<conio.h>

void main()
{int i,j,p,k,l,u;
 clrscr();

 for(i=1,u=6;i<=5;i++,u--)
 {
  for(k=i;k<=5;k++)
  {
   printf(" ");
  }
  for(j=1,p=5;j<=i;j++,p--)
  {
   printf("%i",p);
  }
  for(l=1,p=u;l<i;l++,p++)
  {
   printf("%i",p);
  }
  printf("\n");
 }

 getch();
}