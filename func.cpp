#include<stdio.h>
#include<conio.h>
int A(int);
int main() 
{
	int i,r;
	for(i=1;i<=5;i++)
	{
		r=A(i);
		printf("r=%d\n",r);
	}
	getch();
return 0;
}
int A(int x)
{
static int s=0;
 s=s+x;
return(s);
}
