// WAP to  perform different arithmetic operations using pointers
#include<conio.h>
#include<stdio.h>
int main()
{
    int a=10, b=5, *ab,*pa,k,m;
    ab=&a;
    pa=&b;
    printf("\nArithmetic operations are");
    printf("\nAddition...........");
    k=*ab+*pa;
    printf("%d",k);
    printf("\n.........");
    printf("%d",*pa+a);
    printf("%d",k);
    printf("\nMultiplication.........");
    printf("%d",*ab**pa);
    printf("\n..........");
    printf("%d",*pa*a);
    printf("\nSubtraction............");
    printf("%d",*ab-*pa);
    printf("\n............");
    printf("%d",*pa-a);
    printf("\nmodule ..............");
    printf("%d",*ab%*pa);
    printf("\n.......");
    printf("%d",*pa%a);
    printf("\n division........");
    printf("%d",*pa/(*ab));
    getch();
    return 0;
}
    
    
