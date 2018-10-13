#include<stdio.h>
#include<conio.h>
int main()
{
int a[5][2]={ {1,2},{3,4},{5,6},{7,8},{9,10} };
int j,i;

printf("displaying data using pointer ");
for(i=0;i<5;i++)
	{
for(j=0;i<2;j++)
		{
printf("%d",*(*(a+i)+j));
		}
printf("\n");
	}
	getch();
}

