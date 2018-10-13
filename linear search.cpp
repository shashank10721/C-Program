#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],i,element,n;
printf("\nEnter the no of Elements: ");
scanf("%d", &n);
for(i=0;i<n;i++)
{
printf("\n Enter Element %d: ", i+1);
scanf("%d",&a[i]);
}
printf("\nEnter the element to be searched: ");
scanf("%d", &element);
for(i=0;i<n;i++)
{
if(a[i] == element)
{
printf("\nElement found at position %d",i+1);
getch();
}
}
printf("\nElement not found");
getch();
} 
