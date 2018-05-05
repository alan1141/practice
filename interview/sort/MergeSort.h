/*
 * MergeSort.h
 *
 *  Created on: Mar 4, 2018
 *      Author: alan
 */

#ifndef MERGESORT_H_
#define MERGESORT_H_

namespace sort {

class MergeSort {
public:
	MergeSort();
	virtual ~MergeSort();
	static void sort(int nums[], int size);
private:
	static void sortUtils(int nums[], int l, int r);
	static void merge(int nums[], int l, int m, int r);
};

} /* namespace sort */

#endif /* MERGESORT_H_ */
