#include <stdio.h>
#include<conio.h>
union job 
{
   char name[32];
   float salary;
   int emp_id;
}u;
int main()
{   
   
  printf("Enter employee id:\n");
  scanf("%d",&u.emp_id); 
  printf("Enter name:\n");
   scanf("%s",&u.name);
   printf("Enter salary: \n");
  scanf("%f",&u.salary);
   printf("Salary: %.1f\n",u.salary);
    printf("Employee Id:%d\n",u.emp_id);
   printf("Displaying\nName :%s\n",u.name);
  
   getch();
}
