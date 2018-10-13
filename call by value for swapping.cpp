#include<stdio.h>
void swap(int *,int *);
main()
{ 
 int x,y;
 swap(&x,&y);
 printf("swapping%dand%dis:\n",swap);
}
void swap(int *x,int *y)
{ 
 int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
