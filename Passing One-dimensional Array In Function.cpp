#include <stdio.h>
#include<conio.h>
void display(int a)
   {
   printf("%d",a);
   }
int main()
{
   int c[]={2,3,4};
   display(c[2]);  //Passing array element c[2] only.
   getch();
}
