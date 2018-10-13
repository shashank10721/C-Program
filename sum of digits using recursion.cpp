#include <stdio.h>
#include<conio.h>
int sum (int a); 
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Sum of digits in %d is %d\n", num, sum(num));
   getch();
} 
int sum (int a)
{
    int r;
    static int rev=0;
    if (a== 0)
    return 0;
    else
    {
        r=a%10;
        rev=rev*10+r;
        sum(a/10);
        }
    return rev;
}
