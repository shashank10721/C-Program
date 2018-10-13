 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     char ch1,ch2,ch3;
     int val;
     ch1='A';
     ch2=ch1+3;   //ch2 becomes 'D'
     ch3=ch1+ch2; // ch3 get value equalto addition  of ASCII code of 'A' and 'D'
     ch1++;// ch1 becomes 'B' now
     ch2--;// ch2 becomes 'C' now
     //printf("%d",'a');// Ascii value of 'a' gets printed
     //printf("%d",'1');
     val =ch1*ch2;
     printf("%d",val);// character corresponding to ASCII code 100 gets printed.
     getch();
     return 0;
     }
     
