#include<stdio.h>
#include<conio.h>
main()
{ int a[10],i,sum=0;
  printf("enter an array");
  for(i=0;i<3;i++)
  { scanf("%d",&a[i]);
    sum=sum+a[i];
  }
  printf("sum of an array=%d",sum);
  getch();
}
