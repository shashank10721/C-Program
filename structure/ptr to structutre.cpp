#include<stdio.h>
#include<conio.h>

int main( )
{
struct book
{
char name[25] ;
char author[25] ;
int id ;
} ;
struct book b1 = { "Let us C", "YPK", 101 } ;
struct book *ptr ;
ptr = &b1 ;
printf("%s %s %d\n", b1.name,b1.author,b1.id ) ;
printf("%s %s %d\n", ptr->name,ptr->author,ptr->id ) ;
getch();return 0;
}
