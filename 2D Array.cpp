// To intililaize the array of a two dimensional array and to display its comtent on the screen
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    float a[3][3]={{1,2,3},{5,6,7},{9,10,11}};
    printf("contents of array\n");
    for(i=0;i<=2;i++)
    {
                       for(j=0;j<=2;j++)
                       {
                                          printf("%d",a[i][j]);
                                          } 
                                          printf("\n");                                       
                                          }
                                          getch();
                                          }
