#include <stdio.h>
#include<conio.h>
union job 
{         //defining a union
   char name[32];
   float salary;
   int emp_id;
}u;
struct job1 
{
   char name[32];
   float salary;
   int emp_id;
}s;
int main()
{
   printf("size of union = %d",sizeof(u));
   printf("\nsize of structure = %d", sizeof(s));
   getch();
}
