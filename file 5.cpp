#include<stdio.h>
main()
{ char y[10];
FILE *fp;
fp=fopen("haneesh","w+");
printf("enter name");
gets(y);
fprintf(fp,"%s",y);
printf("data saved");
fclose(fp);
printf("\n data in file is:");
fp=fopen("haneesh","w+");
fread(&y,sizeof(y),1,fp);
printf("%s",y);
}
