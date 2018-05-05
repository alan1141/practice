/*
 * MergeSort.cpp
 *
 *  Created on: Mar 4, 2018
 *      Author: alan
 */

#include <cstddef>
#include "MergeSort.h"

namespace sort {

MergeSort::MergeSort() {
	// TODO Auto-generated constructor stub

}

MergeSort::~MergeSort() {
	// TODO Auto-generated destructor stub
}

void MergeSort::sort(int nums[], int size) {
	if(nums == NULL) return;
	sortUtils(nums, 0, size-1);
}

void MergeSort::sortUtils(int nums[], int l, int r) {
	if(l < r) {
		int middle = (l+r)/2;
		sortUtils(nums, l, middle);
		sortUtils(nums, middle+1, r);
		merge(nums, l, middle, r);
	}
	return;
}

void MergeSort::merge(int nums[], int l, int m, int r) {
	int n1 = m - l + 1;
	int n2 = r - m;
	int array1[n1];
	int array2[n2];

	//L - M
	for(int i=0 ; i<n1 ; ++i){
		array1[i] = nums[l+i];
	}
	//M - R
	for(int i=0 ; i<n2 ; ++i){
		array2[i] = nums[m+1+i];
	}
	//Merge
	int i = 0; //for arra1
	int j = 0; //for array2
	int k = 0; //for merge array
	while(i<n1 && j<n2){
		if(array1[i] <= array2[j]) {
			nums[l+k] = array1[i];
			++k;
			++i;
		} else {
			nums[l+k] = array2[j];
			++k;
			++j;
		}
	}
	//Fill remain
	if(i < n1){
		while(i < n1){
			nums[l+k] = array1[i];
			++i;
			++k;
		}
	}
	if (j < n2) {
		while (j < n2) {
			nums[l+k] = array2[j];
			++j;
			++k;
		}
	}
}

} /* namespace sort */
