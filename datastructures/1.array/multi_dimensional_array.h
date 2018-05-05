/*
 * multi_dimensional_array.h
 *
 *  Created on: Jan 4, 2018
 *      Author: alan
 */

#ifndef LESSON2_MULTI_DIMENSIONAL_ARRAY_H_
#define LESSON2_MULTI_DIMENSIONAL_ARRAY_H_

#include<stdbool.h>
#include<stddef.h>

bool transpose(size_t row, size_t column, int matrix_array[][column], int matrix_array_out[][row]);
void print(size_t row, size_t column, int matrix_array[][column]);

#endif /* LESSON2_MULTI_DIMENSIONAL_ARRAY_H_ */
