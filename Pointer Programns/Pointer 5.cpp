// WAP to assign pointer value to another variable.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5, b, *c;
    c=&a;
    b=*c;
    printf("\n memory location of a is %d",c);
    printf("\n value of a and b is %d",a,b);
    getch();
    return 0;
}
