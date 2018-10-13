 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 int main()
 {
     char str[20];
     printf("enter a line of text",str);
     gets(str);
     puts("The entered line is");
     puts(str);
     getch();
     return 0;
     }
