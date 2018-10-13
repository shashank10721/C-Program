#include<stdio.h>
#include<conio.h>
int main()
{
int a=2, *p, **q;
p=&a;
q=&p;
printf("%d is stored at %u and pointer is stored at %u",a,p,q);
getch();
}
