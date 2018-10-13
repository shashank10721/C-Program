#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,fact=1;
	printf("enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	getch();
}
