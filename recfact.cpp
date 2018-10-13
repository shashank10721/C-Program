#include<stdio.h>
#include<conio.h>
int rec(int);
int main( )
{
int a, f ;
printf("\nEnter any number " ) ;
scanf("%d",&a) ;
f=rec ( a ) ;
printf( "Factorial value = %d",f) ;

getch();
return 0;
}
int rec ( int x )
{
int f ;
if ( x == 1 )
return(1) ;
else
f=x*rec(x-1) ;
return f;
}
