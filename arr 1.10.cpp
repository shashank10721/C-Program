#include<stdio.h>
main()
{ int i;
int a[10];
printf("enter array");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("constraints at even places are:");
for(i=0;i<5;i++)
{ 
  if(i%2==0)
  printf("%d",a[i]);
  
}
}
