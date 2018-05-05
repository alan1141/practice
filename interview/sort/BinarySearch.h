/*
 * BinarySearch.h
 *
 *  Created on: Mar 4, 2018
 *      Author: alan
 */

#ifndef BINARYSEARCH_H_
#define BINARYSEARCH_H_

namespace search {

class BinarySearch {
public:
	BinarySearch();
	virtual ~BinarySearch();
	static int search(int nums[], int x, int target);
private:
	static int searchUtils(int nums[], int l, int r, int x);
};

} /* namespace search */

#endif /* BINARYSEARCH_H_ */
