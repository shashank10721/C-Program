#include<stdio.h>
struct yaswanth
{ char name[20];
  char proverb[50];
  char end[10];
  }y;
main()
{ FILE *ptr;
ptr=fopen("delete","a");
fprintf(ptr,"enter name proverb and end\n haneesh is good\n naveen alsogood\nmeeto");
printf("data saved successfully");
fclose(ptr);
ptr=fopen("delete","r");
char c;
int w=1,l=1;
while((c=fgetc(ptr))!=EOF)

{ if(c==' ')
w++;
else if(c=='\n');
{ w++;
l++;
}
}
fclose(ptr);
printf("no of words in file=%d\n",w);
printf("no of lines in a file=%d",l);
}


