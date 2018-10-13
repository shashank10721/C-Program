#include <stdio.h>
#include<conio.h>
int fibo(int);
int main()
{
    int num,i;
    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &num);
    for(i=0;i<num;i++)
        {
    	    printf("%d",fibo(i));
        }
	getch();
 }
int fibo(int n)
{
    if(n<=1)
    return n;
    else
    return(fibo(n - 1) + fibo(n - 2));
}
