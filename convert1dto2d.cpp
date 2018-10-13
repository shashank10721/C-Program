#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3], b[9], i, j, k =0;
    printf("Enter the element of a matrix : \n");
    for(i=0;i<9;i++)
     {
                      scanf("%d", &b[i]);
     }
    
      for(i=0;i<3;i++)
      {
                       for( j=0; j<3; j++)
                       {
                            a[i][j]= b[k++];
                       }
      }
     printf(" The converted array is \n");
   for(i=0;i<3;i++)
      {
                       for( j=0; j<3; j++)
                           { 
                           printf("%d\t",a[i][j]);
                           }
                           printf("\n");
      }
     getch();
     return 0;
}
                      
