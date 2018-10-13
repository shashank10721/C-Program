#include<stdio.h>
#include<stdlib.h>
main()
{ int *ptr,i,n,sum=0;
float avg;
printf("enter no oof ssubjects");
ptr=(int*)malloc(n*3);
scanf("%d",&n);
for(i=0;i<n;i++)
{ scanf("%d",(ptr+i));
sum=sum+*(ptr+i);
}
free(ptr);
avg=sum/n;
printf("average=%f",avg);
}

