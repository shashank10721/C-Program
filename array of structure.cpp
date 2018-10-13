#include<stdio.h>
#include<conio.h>
struct student
{
	int rn;
	float cgpa;
};
main()
{
	struct student s1={12,5.6};
	printf("%d%f",s1.rn,s1.cgpa);
	getch()
}
