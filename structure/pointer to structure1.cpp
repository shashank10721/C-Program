 #include <stdio.h>
#include <conio.h>

int main() 
{
  struct st 
  {
  int id;
  char *name;
  char *address;
  };
  struct st employee, *stptr;
  stptr = &employee;
  stptr->id = 1;
  stptr->name = "Angelina";
  stptr->address ="Rohini,Delhi";
  printf("Employee Information: id=%d\n%s\n%s\n", stptr->id, stptr->name,
  stptr->address);
  getch();
  
}
