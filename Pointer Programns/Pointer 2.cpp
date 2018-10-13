// WAP to print the value of variable by different ways.How could you use
// '*' and '&' operators for accessing values
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, *pa;
    float b, *ba;
    printf("enter the integer and float value");
    scanf("%d%f",&a,&b);
    pa=&a;
    ba=&b;
    printf("\naddress of a is %d",pa);
    printf("\nvalue of a is %d",a);
    printf("\nvalue of a is %d",*(&a));
    printf("\nvalue of a is %d",*pa);
    printf("\n...................");
    printf("\naddress of b is %d",ba);
    printf("\nvalue of b is %f",b);
    printf("\nvalue of b is %f",*(&b));
    printf("\nvalue of b is %f",*ba);
    getch();
    return 0;
}
