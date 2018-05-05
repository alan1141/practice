/*
 * priority_queue.c
 *
 *  Created on: Jan 16, 2018
 *      Author: alan
 */

#include "heap.h"

#define SWAP(x, y) {\
	x ^= y;\
	y ^= x;\
	x ^= y;\
}

int maximum(int queue[]) {
	if(queue == NULL) return 0;
	return queue[1];
}

int extract_maximum(int queue[], size_t size) {
	if(queue == NULL) return 0;

	int max = queue[1];
	queue[1] = queue[size];
	max_heapify(queue, 1, size-1);

	return max;
}

void increase_val(int queue[], size_t size, int index, int value) {
	if(value <= queue[index] || queue == NULL) return;

	queue[index] = value;
	for(int i=index ; i>1 && queue[i] > queue[i/2] ; i=i/2) {
		SWAP(queue[i], queue[i/2]);
	}

#if 0
	for(int i=index/2 ; i>=1 ; i=i/2){
		max_heapify(queue, i, size);
	}
#endif
}

void insert_value(int queue[], size_t size, int value) {
	queue[size+1] = -1;
	increase_val(queue, size+1, size+1, value);
}

