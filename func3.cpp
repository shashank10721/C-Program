#include<stdio.h>
#include<conio.h>
int sum(int , int , int  );
int main()
{
    int add;
   
    sum(4,3,3);
    //printf("\nThe sum is %d\t",add);
    getch();
    return 0;
}
 int sum(int a, int b, int c)
{
    int s;
    s=a+b+c;
    printf("The sum is %d\t",s);
    //return (0);
}
