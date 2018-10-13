#include<stdio.h>
#include<conio.h>
main()
{
	int a=10,*ptr;
	ptr=&a;
	printf("before addition ptr=%d\n",ptr);
	ptr=ptr+5;
	printf("after addition=%d",ptr);
	getch();
}      
