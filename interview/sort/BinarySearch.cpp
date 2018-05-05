/*
 * BinarySearch.cpp
 *
 *  Created on: Mar 4, 2018
 *      Author: alan
 */

#include "BinarySearch.h"

namespace search {

BinarySearch::BinarySearch() {
	// TODO Auto-generated constructor stub

}

BinarySearch::~BinarySearch() {
	// TODO Auto-generated destructor stub
}

int BinarySearch::search(int nums[], int x, int target) {
	return searchUtils(nums, 0, x-1, target);
}

int BinarySearch::searchUtils(int nums[], int l, int r, int target) {
	if(l > r) return -1;
	int middle = (l+r)/2;
	if(nums[middle] == target) return middle;
	if(nums[middle] > target) return searchUtils(nums, l, middle-1, target);
	return searchUtils(nums, middle+1, r, target);
}

} /* namespace search */
