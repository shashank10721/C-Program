#include<stdio.h>
void swap(int,int);
 main()
{ 
int x,y;
x=10;
y=20;
swap(x,y);
printf("swapping of two values=%d,%d",swap);
}
void swap(int a,int b)
{ int temp;
temp=a;
a=b;
b=temp;
}
