/*
 * heap.c
 *
 *  Created on: Jan 16, 2018
 *      Author: alan
 */

#include"heap.h"

#define SWAP(x, y) {\
	x ^= y;\
	y ^= x;\
	x ^= y;\
}

bool max_heapify(int heap[], int index, size_t size){
	if(heap == NULL || index < 1) return false;

	int left_index = index * 2;
	int right_index = index *2 + 1;
	int largest_index = index;

	if(left_index <= size && heap[index] < heap[left_index]) {
		largest_index = left_index;
	}
	if(right_index <= size && heap[largest_index] < heap[right_index]) {
		largest_index = right_index;
	}
	if(largest_index != index) {
		SWAP(heap[index], heap[largest_index]);
		max_heapify(heap, largest_index, size);
	}

	return true;
}

bool build_max_heap(int heap[], size_t size){
	if(heap == NULL) return false;

	for(int index = size/2 ; index > 0 ; index--) {
		max_heapify(heap, index, size);
	}

	return true;
}

bool heap_sort(int heap[], size_t size) {
	if(heap == NULL) return false;

	build_max_heap(heap, size);

	for(int i=size ; i>1 ; i--){
		SWAP(heap[1], heap[i]);
		max_heapify(heap, 1, i-1);
	}

	return true;
}
