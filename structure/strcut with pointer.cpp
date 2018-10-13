#include<stdio.h>
#include<conio.h>
struct address
{
char *name;
char street[10];
int pin;
}cus={"A.Kumar","H-2",456003},*p=&cus;

int main()
{

printf("%s %s",p->name,(*p).street);
getch();
}

