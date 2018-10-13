#include<stdio.h>
#include<conio.h>
int main()
 {
 int beg=0,end=6,mid,key, c=0 ;
 int a[7]={1,3,7,8,22,36,55};
 printf("enter teh element to be searched:");
 scanf("%d",&key);
 while(beg<=end)
 {
   mid=(beg+end)/2;
   if(key==a[mid])
   {
     printf("element %d is found at %d location",key,mid+1);
     c++;
     break;
      }
   else if(key<a[mid])
   {
     end=mid-1;
       }
   else                                                         //if(key>a[mid])
   {
     beg=mid+1;
   }
   }
if (c==0)
printf("Element not found");
 getch();
}




