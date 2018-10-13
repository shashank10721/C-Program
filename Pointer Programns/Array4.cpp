//WAP to display the sum of squares and cubes of array elemnts using pointers
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int b[]={1,2,3,4,5},j,sum=0;
    for(j=0;j<5;j++)
    {
                    sum+=b[j];
                    }
                    printf("\nSum of squares is %d",sum);
                    
                    getch();
                    return 0;
                    }
