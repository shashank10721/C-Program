// A Progarm to calculate the mean of n elemnets of an array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int mean( int[],int);
    int x[10],n;
    printf("enter number of elemnets");
    scanf("%d",&n);
    printf("enter the elemnets");
    for(int i=0;i<n;i++)
    scanf("%d",&x[i]);
    int res=mean(x,n);
    printf("Mean is %d",res);
    getch();
    return 0;
}
double mean(int m[],int n)
{
       int sum=0;
       for(int i=0;i<n;i++)
       {
       sum = sum+m[i];
       }
       int mn=sum/n;
       
       return (mn);
       } 
