//A Program to count the number of characters,words and lines when multiple lines are eneterd through using getline()
// function
#include<conio.h>
#include<iostream.h>
int main()
{
    char a[100];
    int c=0,w=1,l=1;
    cout<<"enter the string";
    cin.getline(a,100,'*');
    for(int i=0;a[i]!='\0';i++)
    {
            if (a[i]=='\n')
            {
                           l++;
                           w++;
                           }
                           if(a[i]==' '&&a[i+i]!=' ')
                           w++;
                           c++;
                           }
                           cout<<"\n characters"<<c;
                           cout<<"\n words"<<w;
                           cout<<"\n lines"<<l;
                           getch();
                           return 0;
                           }
    
