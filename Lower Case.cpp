// WAP to accept a string and converts from upper case to lower case
#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name1[20]; 
    cout<<"enter the string in uppercase"<<endl;
    gets(name1);
    strlwr(name1);
    cout<<"The result is strcmp"<<" "<<name1<<endl;
    getch();
    return 0;
}
