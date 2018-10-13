#include<stdio.h>
main()
{
	int a=10,*ptr;
	ptr=&a;
	printf("adress=%d",ptr);//here ptr stores address of a
	printf("value=%d",*ptr);//here ptr stores value of a
}
