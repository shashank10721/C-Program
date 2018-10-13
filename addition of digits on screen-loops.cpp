#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,r,sum=0;
	printf("enter the numbers on screen");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("addition of entered numbers=%d",sum);
	getch();
}
