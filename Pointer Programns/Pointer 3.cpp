// WAP to print elemnets and its address using pointer
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, *k;
    k=&i;
    printf("\nenter a number:");
    scanf("%d",&i);
    printf("\n Address of i is %d",k);
    printf("\n value of i is %d",*k);
    getch();
   
}
