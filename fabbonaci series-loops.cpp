#include<stdio.h>
#include<conio.h>
main()
{
int i,n,c,f=0,s=1;
printf("enter the limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	if(i<=1)
	printf("%d",i);
	else
	{
		c=f+s;
		f=s;
		s=c;
		printf("%d",c);
	}
}
getch();
}
