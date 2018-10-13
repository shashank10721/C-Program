#include<stdio.h>
#include<conio.h>
int *func();
main()
{
    int *ptr;
    ptr=func();
    printf("%d",*ptr);
    getch();
    }
int *func()
{
    int *point;
    *point=12;  
    return point;
    //printf("%u",point);
}   
