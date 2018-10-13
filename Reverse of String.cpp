// WAP to accept a string and converts the string in reverse order
#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[20]; 
    cout<<"enter the string"<<endl;
    gets(name);
    cout<<"The result in revrse order"<<" "<<strrev(name)<<endl;
    strrev(name);
    getch();
    return 0;
}
