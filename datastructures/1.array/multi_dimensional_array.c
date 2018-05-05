/*
 * multi_dimensional_array.c
 *
 *  Created on: Jan 4, 2018
 *      Author: alan
 */

#include<stdio.h>
#include"multi_dimensional_array.h"


bool transpose(size_t row, size_t column, int matrix_array[][column], int matrix_array_out[][row]) {
	for(int index_row=0 ; index_row<row ; index_row++){
		for(int index_column=0 ; index_column<column ; index_column++) {
			matrix_array_out[index_column][index_row] = matrix_array[index_row][index_column];
		}
	}
	return true;
}

void print(size_t row, size_t column, int matrix_array[][column]) {
	for (int index_row = 0; index_row < row; index_row++) {
		for (int index_column = 0; index_column < column; index_column++) {
			printf("%d ", matrix_array[index_row][index_column]);
		}
		printf("\n");
	}
}

int main2(int argc, char *argv[]){
	#define ROW 3
	#define COL 5
	int matrix_array[ROW][COL] = {{13, 4, 8, 14, 1}, \
								  {9, 6, 3, 7, 21}, \
								  {5, 12, 17, 9, 3}};
	int matrix_array_out[COL][ROW];
	transpose(ROW, COL, matrix_array, matrix_array_out);
	print(COL, ROW, matrix_array_out);

	return 0;
}
