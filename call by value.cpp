#include<stdio.h>
#include<conio.h>
int swapv ( int , int);
 int main( )
{
int a = 10, b = 20 ;
swapv ( a, b ) ;
printf( "\n a = %d \n b=%d", a, b ) ;
getch();
return 0;
}
int swapv ( int x, int y )
{
int t ;
t = x ;
x = y ;
y = t ;
printf( "\n x = %d \n y =%d", x, y ) ;
return 0;
}
