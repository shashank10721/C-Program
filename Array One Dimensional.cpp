// WAP to read n numbers and store them in a one dimensional array and diaply them on to the screen
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,n;
    printf("how many no to store in array\n");
    scanf("%d",&n);
    printf("enter the number\n");
    for(i=0;i<=n-1;i++)
    {
                       scanf("%d",a[i]);
                       }
                       printf("contents of the array\n");
                       for(i=0;i<=n-1;i++)
                       {
                                          printf("%d",a[i]);
                                          printf("\t");
                                          }
                                          getch();
                                          return 0;
                                          }
