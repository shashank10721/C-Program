#include<stdio.h>
#include<conio.h>
main()
{ int a[10],i,index,pos,item;
  printf("enter series");
  for(i=0;i<5;i++)
  { scanf("%d",&a[i]);
  }
    printf("enter element and position");
    scanf("%d%d",&item,&pos);
    index=pos-1;
    for(i=4;i>=index;i--)
    { a[i+1]=a[i];
}
     a[index]=item;
	
     for(i=0;i<5;i++)
     	{ printf("%d",a[i]);
     }
     	getch();
		 }
    

