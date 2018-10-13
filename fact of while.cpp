#include<stdio.h>
main()
{ int i,n=5,fact=1;
 i=1;
 while(i<=n)
 { fact=fact*i;
  i++;
 }
 printf("fact=%d",fact);
}
