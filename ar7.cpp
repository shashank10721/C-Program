#include<stdio.h>
#include<conio.h>
main()
{ int a[10],i,index,pos,item;
  printf("enter elements of an arrays");
  for(i=0;i<5;i++)
  { scanf("%d",&a[i]);
  }
    printf("enter  position");
    scanf("%d",&pos);
    index=pos-1;
    for(i=index;i<4;i++)
    { a[i]=a[i+1];
	}
     for(i=0;i<4;i++)
     	{ printf("%d",a[i]);
     }
     
     	getch();
		 }
    

