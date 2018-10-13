// WAP to display the array elements with their addresses using arraya name as 
// pointer
#include<conio.h>
#include<stdio.h>
int main()
{
    int x[5]={1,2,3,4,5},i;
    printf("\nElement address");
    for(i=0;i<4;i++)
    {
                    printf("\nx[%d]=\t%d",i,*(x+i));
                    printf("%8d",x+i);
                    }
                    getch();
                    return 0;
                    }
