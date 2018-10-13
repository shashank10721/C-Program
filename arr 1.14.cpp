#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{   char a[10]; 
 int i,c=0;
printf("enter string");
gets(a);
for(i=0;a[i]!='\0';i++)
{ if(a[i]=='e')
{ c++;
a[i]='x';
}
printf("no of e in string = %d",c);
puts(a);
}
}
