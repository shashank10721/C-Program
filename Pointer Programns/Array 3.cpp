// WAP to copy element of one array to another array using pointers
#include<conio.h>
#include<stdio.h>
int main()
{
    int s[5]={10,20,30,40,50},*ps,ds[5],i;
    ps=s;
    for(i=0;i<5;i++)
    {
                    ds[i]=*ps;
                    ps++;
                    }
                    printf("Original array Duplicated array");
                    for(i=0;i<5;i++)
                    {
                    printf("\n\t%d\t\t%d",s[i],ds[i]);
                    }
                    getch();
                    return 0;
                    }
