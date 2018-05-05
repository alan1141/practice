/*
 * QuickSort.cpp
 *
 *  Created on: Mar 4, 2018
 *      Author: alan
 */

#include <iostream>
#include "QuickSort.h"

namespace sort {

void swap(int *x, int *y){
	if(*x == *y) return;
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
}

QuickSort::QuickSort() {
	// TODO Auto-generated constructor stub

}

QuickSort::~QuickSort() {
	// TODO Auto-generated destructor stub
}

void QuickSort::sort(int nums[], int size) {
	sortUtils(nums, 0, size - 1);
}

void sort::QuickSort::sortUtils(int nums[], int l, int r) {
	if(l < r) {
		int piovt = partition(nums, l, r);
		sortUtils(nums, l, piovt-1);
		sortUtils(nums, piovt+1, r);
	}
	return;
}

int QuickSort::partition(int nums[], int l, int r) {
	int pivot = nums[r];
	int smallerPtr = l-1;
	for(int i=l ; i<=r-1 ; ++i){
		if(nums[i] <= pivot) {
			++smallerPtr;
			swap(&nums[smallerPtr], &nums[i]);
		}
	}
	swap(&nums[smallerPtr+1], &nums[r]);
	return smallerPtr+1;
}

} /* namespace sort */
