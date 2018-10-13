#include <stdio.h>
#include <conio.h>

struct comp_info
{
	char nm[100];
	char addr[100];
};

int main()
{
    comp_info info;
	printf("\n Enter Company Name : ");
	gets(info.nm);
	printf("\n Enter Address : ");
	gets(info.addr);
	printf("\n\n Company Name : %s",info.nm);
	printf("\n\n Address : %s",info.addr);
	getch();
}
