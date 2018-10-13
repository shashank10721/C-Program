#include<stdio.h>
main()
{ int a[10],max,i;
printf("enter array");
for(i=0;i<=5;i++)
{ scanf("%d",&a[i]);

}
max=a[0];
for(i=0;i<=5;i++)
{ if(a[i]>max);
max=a[i];
}
printf("maxmum element in loop=%d",max);
}
