#include<stdio.h>
#include<conio.h>
main()
{ int a[10],i,max;
printf("enter array");
for(i=0;i<7;i++)
{  scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<5;i++)

if(a[i]>max)
{
  max=a[i];
}
printf(";maximum=%d",max);
getch();
}
