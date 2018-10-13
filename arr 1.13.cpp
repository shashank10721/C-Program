#include<stdio.h>
#include<conio.h>
main()
{
int a[10],i,loc,index;
printf("enter the elements of array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("enter location");
scanf("%d",&loc);
index=loc-1;
for(i=index;i<4;i++)
{a[i]=a[i+1];
}
for(i=0;i<4;i++)
{
printf("%d \n",a[i]);
}
getch();
}

