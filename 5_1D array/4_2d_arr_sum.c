#include<stdio.h>

main()
{
	int n1,n2;
	
	printf("enter array size :- ");
	scanf("%i",&n1);
	printf("\n");
	
	int a[n1],b[n2],c[n1];
	int i;
	
	for(i=0;i<n1;i++)
	{
		printf("a[%i] : ",i);
		scanf("%i",&a[i]);
		
	}
	
	printf("\n\n------------\n\n");
	
	printf("enter array size :- ");
	scanf("%i",&n2);
	printf("\n");
	
	for(i=0;i<n2;i++)
	{
		printf("b[%i] : ",i);
		scanf("%i",&b[i]);
	}

	printf("\n\n------------\n\n");
	
	if(n1==n2)
	{  
	for(i=0;i<n1;i++)
	{
	   c[i] = a[i]+b[i];
	   printf("c[%i] => %i\n",i,c[i]); 	
	}	

    }
    else
    {
    	printf("Length of 2 array is mismatch.");
	}
	
	
}
