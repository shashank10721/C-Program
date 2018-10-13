#include<stdio.h>
main()
{ int a[5],*p,i;
  p=a;
  printf("enter array");
  for(i=0;i<5;i++)
  { scanf("%d",(p+i));  
  }
  printf("array");
  for(i=0;i<5;i++)
  { printf("%d",*(p+i));
  }
  
}
