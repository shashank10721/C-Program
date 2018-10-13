#include<stdio.h>
#include<conio.h>
int sum(int i);
int main()
{
   int total;
   total = sum(2);
  printf("\n the sum is %d",total);
  
    getch();
    return 0;
}
int sum(int i)
{
  static int even = 0;
    if(i<=20)
    {
             even=even + i;
             sum(i+2);     //calling same function
    }
    return even;
}
