#include<stdio.h>
#include<stdlib.h>
main()
{ int a[5],*ptr,i,sum=0;//sum of elements pointer to array using dma
printf("enter array\n");
ptr=(int*)calloc(5,4);//malloc by default it takes garbage
  for(i=0;i<5;i++)
  { scanf("%d",(ptr+i));//calloc by default it takes zero
  sum=sum+*(ptr+i);
  }
    ptr=(int*)realloc(ptr,5);
  printf("sum=%d",sum);
}      
