#include <stdio.h>
#include<stdlib.h>
#define NUM_ROWS 3
#define NUM_COLS 2
int main(void) {
	// refer to http://stackoverflow.com/questions/917783/how-do-i-work-with-dynamic-multi-dimensional-arrays-in-c
	// your code goes here
	// 3 rows x 2 column 2-D int array, contiguous
	// allocate memory for each row starting element
	// NUM_ROWS double pointers
	int** rowPtr = (int **)malloc(NUM_ROWS*sizeof(int*));
	
	// allocate all integers contiguosly and then let it get distributed in row-column fashion
	int* temp = (int*)malloc(NUM_ROWS*NUM_COLS*sizeof(int));
	
	int i,j;
	
	for(i = 0; i<NUM_ROWS; i++ )
	{
		// allocate memory for each row elements
		// each rowPtr[i] actually jumps from starting of temp to i*NUM_COLS.
		rowPtr[i] = temp + (i*NUM_COLS );
	}
	
	for(i = 0; i<NUM_ROWS; i++)
	{
		for(j = 0; j< NUM_COLS; j++)
		{
			rowPtr[i][j] = 22;
		}
	}
	
	for(i = 0; i<NUM_ROWS; i++)
	{
		for(j = 0; j< NUM_COLS; j++)
		{
			printf("%d\n", rowPtr[i][j]);
		}
	}
	
	return 0;
}
