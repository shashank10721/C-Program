#include<stdio.h>
#include<conio.h>
main()
{ int a[5],i,k,sum=0;
  printf("enter 5 elements");
  for(i=0;i<5;i++)
  { scanf("%d",&a[i]);
   sum=sum+a[i];
  }
  for(k=0;k<sum;k++)
  { for(i=0;i<5;i++)
  { if (a[i]==k)
     printf("%d",a[i]);
  }
  }
}
