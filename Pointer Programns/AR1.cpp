//WAP to program to show the effect of increment on pointers variables.
//display the memory locations of integers, character and floating point
//numbers before and after increment of poinetrs.
#include<conio.h>
#include<stdio.h>
int main()
{
    int x,*x1;
    char y,*y1;
    float z,*z1;
    printf("\n enter integer, character, float values \n");
    scanf("%d %c %f",&x,&y,&z);
    x1=&x;
    y1=&y;
    z1=&z;
    printf("\nAddress of x is %d",x1);
    printf("\nAddress of y is %d",y1);
    printf("\nAddress of z is %d",z1);
    x1++;
    y1++;
    z1++;
    printf("\n After increment in pointers");
    printf("\n now address of x is %d",x1);
    printf("\n now address of y is %d",y1);
    printf("\n now address of z is %d",z1);
    printf("\n....size of....");
    printf("\n size of x is %d",sizeof(x));
    printf("\n size of y is %d",sizeof(y));
    printf("\n size of z is %d",sizeof(z));
    getch();
    return 0;
}
    
    
    
