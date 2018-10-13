// WAP to find the length of the string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[60];
    int length;
    printf("enter any text \n");
    gets(name);
    length=strlen(name);
    printf("The length of the entered text is %d",length);
    getch();
    return 0;
}
