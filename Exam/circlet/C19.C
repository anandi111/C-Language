#include<stdio.h>
#include<conio.h>

void main()
{int i,j,u,p,k,l,y;
 clrscr();

 for(i=1,u=5;i<=5;i++,u--)
 {
  for(j=i,y=1;j<=5;j++,y++)
  {
   printf("%i",y);
  }
  for(k=1;k<i;k++)
  {
   printf("  ");
  }
  for(l=i,p=u;l<=5;l++,p--)
  {
    printf("%i",p);
  }
  printf("\n");
 }

	for(i=2,u=2;i<=5;i++,u++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%i",j);
		}
		for(k=i;k<5;k++)
		{
			printf("  ");
		}
		for(j=1,p=u;j<=i;j++,p--)
		{
			printf("%i",p);
		}
		printf("\n");
	  }
 getch();
}