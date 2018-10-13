#include <stdio.h>
#include<conio.h>
float average(float a[],int size);
 main()
 {
     float avg, c[]={2,4,6};
     avg=average(c,3);   /* Only name of array is passed as argument. */
     printf("Average age=%f",avg);
     getch();
   }

float average(float a[],int size)
{ 
     int i;
     float avg, sum=0.0;
     for(i=0;i<size;++i)
     {
       sum=sum+a[i];
     }
     avg =(sum/size);
     return avg;
}
