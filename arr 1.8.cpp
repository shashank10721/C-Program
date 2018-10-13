#include<stdio.h>
int main()
{ int a[20],i,n,j,t;
  printf("enter no of elements to be sorted");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { printf("elements to be sorted is %d:",i+1);
   scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  { int last=(n-1)-i;
  for(j=0;j<last;j++)
  { if(a[j]>a[j+1])
    { t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
}
	}
}
  printf("ascending order");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
  return 0;
}

