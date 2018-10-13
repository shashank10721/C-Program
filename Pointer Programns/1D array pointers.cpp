#include<stdio.h>
#include<conio.h>
int main()
{
int a[5]={1,2,3,4,5};
int *p,i;
p=a;
printf("displaying data using pointer\n");
for(i=0;i<5;i++)
	{
printf("%d\n", *(p+i));
	}
printf("displaying data using array name\n");
for(i=0;i<5;i++)
	{
printf("%d\n",*(a+i));
	}
	getch();
}
