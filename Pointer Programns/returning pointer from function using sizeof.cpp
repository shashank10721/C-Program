#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 int * func()
{
    int * i = (int*) malloc(sizeof(int));
    (*i) = 5;
    return i;
}

int main()
{
    int *p ;
    p= func();
    printf("%d\n", (*p));
    (*p) = 3;
    printf("%d\n", (*p));
    free(p);
    getch();
}
