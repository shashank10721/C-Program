// To compare two strings 
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name1[20]; 
    char name2[20];
    int c;
    printf("enter the first string");
    gets(name1);
    printf("enter the second string");
    gets(name2);
    c=strcmp(name1,name2);
    printf("The result is strcmp %d",c);
    getch();
    return 0;
}
    
