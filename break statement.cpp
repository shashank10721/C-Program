#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		printf("%d",i);
		if(i==10)
		break;
	}
	getch();
}
