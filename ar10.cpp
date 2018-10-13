#include<stdio.h>
#include<conio.h>
main()
int max(int a[],int size)
{ int max=a[0],i;
for(i=0;i<size;i++)
{ if(a[i]>max)
 max=a[i];
}
return max;
getch();
}
