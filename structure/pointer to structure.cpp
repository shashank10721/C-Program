#include <stdio.h>
#include<conio.h>
struct name
{
   int a;
   float b;
};
int main()
{
    struct name *ptr,p;
    ptr=&p;            /* Referencing pointer to memory address of p */
    printf("Enter integer: ");
   // scanf("%d",&ptr->a);
    scanf("%d",&(*ptr).a);
    printf("Enter number: ");
   // scanf("%f",&ptr->b);
    scanf("%f",&(*ptr).b);
    printf("Displaying: \n");
   printf("%d\n %f",(*ptr).a,(*ptr).b);
   //printf("%d\n%f",ptr->a,ptr->b);
   
    getch();
}
