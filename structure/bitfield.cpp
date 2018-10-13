#include <stdio.h>
#include <string.h>
#include<conio.h>

struct abc
{
  unsigned int age : 5;
} A;

int main( )
{
   A.age = 1;
   printf( "Sizeof( Age ) : %d\n", sizeof(A) );
   printf( "Age.age : %d\n", A.age );

   A.age = 7;
   printf( "Age.age : %d\n", A.age );

   A.age = 31;
   printf( "Age.age : %d\n", A.age );

   getch();
}
