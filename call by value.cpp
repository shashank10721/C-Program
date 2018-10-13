#include<stdio.h>
#include<conio.h>
void swap(int ,int );
main()
{
	int x,y;

	x=8;
	y=9;
	swap(x,y);
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("%d%d",a,b);
}
