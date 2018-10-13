#include<stdio.h>
main()
{ int a[10],min,i;
printf("enter array");
for(i=0;i<5;i++)
{ scanf("%d",&a[i]);

}
min=a[0];
for(i=0;i<5;i++)
{ if(a[i]<min);
min=a[i];
}
printf("minimum element in loop=%d",min);
}
