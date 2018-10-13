#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3], b[9], i, j, k =0;
    printf("Enter the element of a matrix : \n");
    for(i=0;i<3;i++)
      {
                       for( j=0; j<=2; j++)
                           { 
                           scanf("%d",&a[i][j]);
                           }
      }
      for(i=0;i<3;i++)
      {
                       for( j=0; j<=2; j++)
                       {
                            b[k++] = a[i][j];
                       }
      }
     printf(" The converted array is \n");
     for(i=0;i<9;i++)
     {
                      printf("%d\t", b[i]);
     }
     getch();
     return 0;
}
                      
