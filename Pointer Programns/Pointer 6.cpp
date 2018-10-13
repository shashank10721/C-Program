// WAP to assign value of b to a through pointers. show the effect of addition
// before  and after assigment of value of b to a.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, *cd,*gh,k;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    cd=&a;
    gh=&b;
    k=*cd+*gh;
    printf("\n value of a and b is %d %2d",a,b);
    printf("\naddress of a is %d",cd);
    printf("\naddress of b is %d",gh);
    printf("\naddtion of a and b is %d",k);
    *cd=*gh;
   
    printf("\n value of *cd and *gh is %d%2d",*cd,*gh);
    printf("\naddress of cd and gh is %d",cd);
    printf("\naddress of gh and gh is %d",gh);
    printf("\n addition is %d",*cd+*gh);
    getch();
    return 0;
}
