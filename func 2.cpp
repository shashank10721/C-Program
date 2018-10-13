#include<stdio.h>
#include<conio.h>
int sum(int , int , int  );
int main()
{
    int add;
   
    add=sum(4,3,3);
    printf("The sum of three nos is %d",add);
    getch();
    return 0;
}
 int sum(int a, int b, int c)
{
    
    return (a+b+c);
}
