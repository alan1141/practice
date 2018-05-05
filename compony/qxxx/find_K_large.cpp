/*
 * find_K_large.cpp
 *
 *  Created on: Mar 10, 2018
 *      Author: alan
 */

#include<iostream>
#include<vector>

int findKlarge(std::vector<int> &A, int k){
	int tmp = 0;
	for(int x = 0 ; x<k ; ++x) {
		for(size_t y = 0 ; y<A.size()-1 ; ++y) {
			if(A[y] > A[y+1]) {
				tmp = A[y];
				A[y] = A[y+1];
				A[y+1] = tmp;
			}
		}
	}
	return A[(A.size()-1) - (k-1)];
}

//int main(int argc, char** argv) {
//	std::vector<int> A = {3, 4, 1, 2, 6};
//	std::cout << findKlarge(A, 5) << std::endl;
//	return 0;
//}
