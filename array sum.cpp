#include<stdio.h>
#include<conio.h>
main()
{ int a[10],i,sum=0;
  printf("enter array elements");
  for(i=0;i<5;i++)
  { scanf("%d",&a[i]);
  sum=sum+a[i];
  }
  printf("sum of arrays=%d",sum);
  getch();
  }
