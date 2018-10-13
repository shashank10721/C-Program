#include<stdio.h>
#include<stdlib.h>
main()
{ int a[5],*ptr,i,sum=0;
  ptr=(int*)calloc(5,4);
  for(i=0;i<5;i++)
  { scanf("%d",(ptr+i));
  sum=sum+*(ptr+i);
  }
  ptr=(int*)realloc(ptr,5);
  printf("sum=%d",sum);
}
