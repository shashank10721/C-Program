#include<stdio.h>
main()
{ int a[5],i,sum=0;
float avg;
  printf("enter array");
  for(i=0;i<5;i++)
  { scanf("%d",&a[i]);
  sum=sum+a[i];
  }
  printf("sum=%d",sum);
  avg=sum/5;
  printf("avg=%f",avg);
}
