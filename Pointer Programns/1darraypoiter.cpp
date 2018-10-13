//It is nothing but a collection of address.
#include<stdio.h>
#include<conio.h>
 int main()
{
int a[5]={1,2,3,4,5},i;
int *p[5];
for(i=0;i<5;i++)
{
p[i]=a+i;
}
for(i=0;i<5;i++)
{
printf("%d value ", *p[i]);
printf("at location %u \n",p+i);
}
getch();
}
