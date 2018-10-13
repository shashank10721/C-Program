#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b);
main()
{
	int x,y;
	printf("enter the numbers");
	scanf("%d%d",&x,&y);
	swap(&x,&y);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("%d%d",*a,*b);
}
