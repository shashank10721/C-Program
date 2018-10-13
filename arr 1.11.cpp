#include<stdio.h>
main()
{ int a[5],i,sum=0;
printf("enter array");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
{ if(a[i]%3==0)
sum=sum+a[i];
}
printf("sum=%d",sum);

}
