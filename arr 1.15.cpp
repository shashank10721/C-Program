#include<stdio.h>
main()
{ int a[5],b[5],c[5],i,j,k;
  printf("enter a array");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  printf("enter b array");
  for(j=0;j<5;j++)
  scanf("%d",&b[j]);
  printf("enter c array");
  for(i=0,j=0;i<5,j<5;i++,j++)
  { c[k]=a[i]+b[j];
      printf("%d",&c[k]);
	    }
}
