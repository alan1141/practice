/*
 * heap.h
 *
 *  Created on: Jan 16, 2018
 *      Author: alan
 */

#ifndef HEAP_H_
#define HEAP_H_

#include<stddef.h>
#include<stdbool.h>

bool max_heapify(int heap[], int index, size_t size);
bool build_max_heap(int heap[], size_t size);
bool heap_sort(int heap[], size_t size);

#endif /* HEAP_H_ */
