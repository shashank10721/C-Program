#include <iostream>
#include<conio.h>
using namespace std;

int main ()
{
  char question[] = "Please, enter your first name: ";
  char greeting[] = "Hello, ";
  char yourname [10];
  cout << question;
  cin >> yourname;
  cout << greeting << yourname << "!";
  getch();
  return 0;
}
