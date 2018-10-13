/* example program to demonstrate the passing of an array */
	#include <stdio.h>
	#include<conio.h>
	int  findmaximum( int arr[], int size )
	{
		int  largest, i;
		largest = arr[0];
		for( i = 0; i < size; ++i )
		{
			if( arr[i] > largest )
				largest = arr[i];
            }
		return largest;
	}
    main()
	{
		int a1[6] = { 5, 34, 56, -12, 3, 19 };
		int a2[6];
		printf("enter array of 6 size");
		for(int i=0;i<6;i++)
		scanf("%d",&a2[i]);
		printf("maximum of numb1[] is %d\n", findmaximum(a1, 6));
		printf("maximum is numb2[] is %d\n", findmaximum(a2, 6));
		getch();
	}
