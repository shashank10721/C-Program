#include <stdio.h>
#include <conio.h>
main()
{
long n,j,sum = 0;

printf("Enter the No :- ");
scanf("%ld",&n);
       printf("\n");
    while(n>0)
    {
       j = n%10;
       sum += j;
       n /= 10;
    }

printf("The sum of digit is = %ld", sum);
getch();

}
