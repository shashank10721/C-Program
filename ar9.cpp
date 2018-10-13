#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,item;
	printf("enter elements of an array");
	for(i=0;i<5;i++)
	{ scanf("%d",&a[i]);
	}
	printf("enter elements to be searched");
	scanf("%d",&item);
	for(i=0;i<5;i++)
	{ if (a[i]==item)
	   { printf("the element found at the position=%d",i+1);
	   getch();
	   }
	   return 0;
	}
	printf("element not found");
	getch();
}
