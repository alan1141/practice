/*
 * one_dimension.c
 *
 *  Created on: Jan 4, 2018
 *      Author: alan
 */

#include<stdio.h>
#include"one_dimension_array.h"

#define SWAP(x, y) x ^= y; y ^= x; x ^= y;

int reverse_array(int array[], size_t size) {
	for(size_t i=0 ; i<size/2 ; i++) {
		SWAP(array[i], array[size-1-i]);
	}
	return 0;
}

void print_array(int array[], size_t size) {
	for(size_t i=0 ; i<size ; i++) {
		printf("%d ", array[i]);
	}
}


int main1(int argc, char *argv[]) {
	#define SIZE 11
	size_t size = SIZE;
	int array[SIZE] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	reverse_array(array ,size);
	print_array(array, size);
	return 0;
}
