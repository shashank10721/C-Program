#include<stdio.h>
#include<conio.h>
int main()
{ int a[100],n,ele,i;//i=index=location-1;
printf("enter no of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{ printf("enter element is %d=",i+1);
   scanf("%d",&a[i]);
}
printf("enter element to be searched");
scanf("%d",&ele);
for(i=0;i<n;i++)
{ if(a[i]==ele)
  printf("element found t position=%d",i+1);
getch();
}
printf("element not found");
getch();
}

