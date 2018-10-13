#include<stdio.h>
#include<conio.h>
int main()
 {
          int a[50],n,i, j, t;
          printf("\n Enter integer value for total no.s of elements to be sorted: ");  
          scanf("%d",&n);
                  printf("\n Enter nos"); 
            for( i=0;i<n;i++)  
            { 
                       scanf("%d",&a[i]);  
            } 
            for(i=0;i<n;i++)  
            {  
              int last = (n-1)-i;               
               for(j=0; j<last ;j++)   
                  {  
                    if(a[j]>a[j+1])  
                                    {  
                                      t=a[j];  
                                     a[j]=a[j+1];  
                                     a[j+1]=t;  
                                    }  
                   }           
             }
           printf("Array in ascending order");
           for(i=0; i<n; i++)
           printf("%d\n", a[i]);
           getch();
           return 0;
           }
