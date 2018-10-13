#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
int a=10,b=20;
swap(&a,&b);
printf("a=%d b=%d",a,b);
getch();
}
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
