#include<stdio.h>
#include<conio.h>
main()
{
	int c,beg,end,mid,a[100],n,num;
	printf("enter number of elements in array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(c=0;c<n;c++)
	{
		scanf("%d",&a[c]);
	}
	printf("enter the number to be searched");
	scanf("%d",&num);
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	while(beg<=end)
	{
		if(a[mid]<num)
		beg=mid+1;
		else if(a[mid]==num)
		{
			printf("number %d found at %d location",num,mid+1);
			break;
		}
		else
		end=mid-1;
		mid=(beg+end)/2;
	}
	if(beg>end)
	printf("sorry.....%d not found",num);
	getch();
}
