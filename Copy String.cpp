// WAP to copy content of one string to another
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name1[60];
    char name2[60];
    printf("enter the text os string1");
    gets(name1);
    strcpy(name2,name1);
    printf("The text of string1 is %s",name1);
    printf("The text of string2 is %s",name2);
    getch();
    return 0;
}
