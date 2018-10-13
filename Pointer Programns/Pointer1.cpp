// WAP to display the value of a variable and its location using pointer.
#include<conio.h>
#include<iostream.h>
int main()
{
    int v=10, *p;
    p=&v;
    cout<<"\naddress of v is "<<p;
    cout<<"\nvalue of v is "<<*p;
    cout<<"\nvalue of v is  "<<*(*(&p));
    getch();
    return 0;
}
