/* example program to demonstrate the passing of an array */
	#include <stdio.h>
	#include<conio.h>
    int  maximum( int values[5] )
	{
		int  max_value, i;
        max_value = values[0];
		for( i = 0; i < 5; ++i )
			if( values[i] > max_value )
				max_value = values[i];
		return max_value;
	}
	
	main()
	{
		int values[5], i, max;
		
		printf("Enter 5 numbers\n");
		for( i = 0; i < 5; ++i )
			scanf("%d", &values[i] );
		
		max = maximum( values );
		printf("\nMaximum value is %d\n", max );
		getch();
	}
