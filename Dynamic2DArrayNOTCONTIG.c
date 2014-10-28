#include <stdio.h>
#include<stdlib.h>
#define NUM_ROWS 3
#define NUM_COLS 2
int main(void) {
	// your code goes here
	// 3 rows x 2 column 2-D int array, non-contiguous
	// allocate memory for each row starting element
	// NUM_ROWS double pointers
	int** rowPtr = (int **)malloc(NUM_ROWS*sizeof(int*));
	int i,j;
	
	for(i = 0; i<NUM_ROWS; i++ )
	{
		// allocate memory for each row elements
		// NUM_COLS single pointers
		rowPtr[i] = (int*)malloc(NUM_COLS*sizeof(int));
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
