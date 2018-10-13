#include<stdio.h>
main()
{ int a[10],*p,i,sum=0;
float avg;
    p=a;
    for(i=0;i<5;i++)
    { printf("enter elements at position is %d is =",i+1);
    scanf("%d",(p+i));
	}
	p=(int*)malloc(n*4);
	for(i=0;i<5;i++)
	{ sum=sum+i;
	}
	free(p);
	printf("sum=%d\n",sum);
	avg=sum/5;
	printf("avg=%f",avg);
}
