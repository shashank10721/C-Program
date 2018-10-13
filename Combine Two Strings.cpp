// WAP to combine the two string
#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name1[20];
    char name2[20];
    printf("Enter the first string");
    gets(name1);
    printf("enter the second string");
    gets(name2);
    strcat(name1,name2);
    printf("The combined string is %s",name1);
    getch();
    return 0;
}
