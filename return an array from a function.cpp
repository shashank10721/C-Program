#include<stdio.h>
#include<conio.h>
int func();
int main()
{
  int array[3];
 printf("%d", array[1] = func()); 
  getch();
}
 
int func()
{
  static int array[3];
  array[0]=5;
  array[1]=6;
  array[2]=7;
 
  return array[1];
}
