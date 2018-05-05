/*
 * QuickSort.h
 *
 *  Created on: Mar 4, 2018
 *      Author: alan
 */

#ifndef QUICKSORT_H_
#define QUICKSORT_H_

namespace sort {

class QuickSort {
public:
	QuickSort();
	virtual ~QuickSort();
	static void sort(int nums[], int size);
private:
	static void sortUtils(int nums[], int l, int r);
	static int partition(int nums[], int l, int r);
};

} /* namespace sort */

#endif /* QUICKSORT_H_ */
