//WAP to display the array elemnet with their addresses using array name 
//as a pointer
#include<conio.h>
#include<stdio.h>
int main()
    {
        int x[5]={2,4,6,8,10},k=0;
        printf("\n Elemnet no. Element address");
        while(k<5)
        {
        printf("\n x[%d]=\t%d %d",k,*(x+k),(x+k));
        k++;
        }
        getch();
        return 0;
        }
        
    
