#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int factorial(int);
int main( )
{
int a, fact ;
//printf("\nEnter the number you want to calculate factorial of ")  ;
cout<<"enter the value of a=";
cin>>a;
//scanf("%d",&a );
factorial( a ) ;
//printf( "Factorial value = %d", fact) ;

getch();
return 0;
}
int factorial ( int x )
{
int f ;
if ( x==1 || x==0 )
return ( 1 ) ;
else
f = x * factorial ( x - 1 ) ;
printf( "Factorial value = %d", f) ;
return ( f ) ;
}
