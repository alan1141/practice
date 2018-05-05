/*
 * main.c
 *
 *  Created on: Jan 16, 2018
 *      Author: alan
 */

#include<stdio.h>
#include"heap.h"
#include"priority_queue.h"

#define BUFFER_SIZE 10

void printarray(int heap[], size_t size);

int main(int argc, char *argv[]){
	int heap[BUFFER_SIZE] = {0, 4, 7, 12, 8, 2, 6, 5, 9, 0};

	printf("Original Array\n");
	printarray(heap, BUFFER_SIZE);

	printf("After heep sort\n");
	heap_sort(heap, BUFFER_SIZE-2);
	printarray(heap, BUFFER_SIZE);

	printf("After build heep\n");
	build_max_heap(heap, BUFFER_SIZE-2);
	printarray(heap, BUFFER_SIZE);

	printf("Get maximum from queue： %d\n", maximum(heap));
	printf("Extract maximum from queue： %d\n", extract_maximum(heap, BUFFER_SIZE-2));
	printf("Print queue\n");
	printarray(heap, BUFFER_SIZE);

	printf("Increase Value\n");
	increase_val(heap, BUFFER_SIZE-3, 5, 100);
	printf("Print queue\n");
	printarray(heap, BUFFER_SIZE);

	printf("Insert Value\n");
	insert_value(heap, BUFFER_SIZE-3, 99);
	printarray(heap, BUFFER_SIZE);
}

void printarray(int heap[], size_t size){
	for(int i=0 ; i<size ; i++){
		printf("%d ", heap[i]);
	}
	printf("\n");
}
