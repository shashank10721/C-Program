#include<conio.h>
#include<iostream.h>
int main()
{
    char name[80];
    cout<<"enter a string";
    cin.get(name,80,'*');
    cout<<name;
    getch();
    return 0;
}
