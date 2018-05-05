/*
 * q11.cpp
 *
 *  Created on: Feb 26, 2018
 *      Author: alan
 */

#include<iostream>
#include<stdio.h>
#include "q11.h"

namespace leetcodeeasy {

q11::q11() {
	// TODO Auto-generated constructor stub

}

q11::~q11() {
	// TODO Auto-generated destructor stub
}

void q11::printSpiralArray(int m, int n, int array[3][6]) {
	//K, M <-x
	//L, N <-y
	//i
	int k = 0;
	int l = 0;
	int i = 0;
	while(k < m && l < n){
		printf("============================================================\n");
		// case1
		printf("===== Case1 =====\n");
		for(i = l ; i < n ; i++){
			printf("%2d, k=%d, m=%d, l=%d, n=%d \n", array[k][i], k, m, l, n);
		}
		k++;
		// case2
		printf("===== Case2 =====\n");
		for(i = k ; i < m ; i++){
			printf("%2d, k=%d, m=%d, l=%d, n=%d \n", array[i][n-1], k, m, l, n);
		}
		n--;
		// case3
		printf("===== Case3 =====\n");
		if(k < m) {
			for(i = n-1 ; i >= l ; i--){
				printf("%2d, k=%d, m=%d, l=%d, n=%d \n", array[m-1][i], k, m, l, n);
			}
			m--;
		}
		// case4
		printf("===== Case4 =====\n");
		if(l < n) {
			for(i = m-1 ; i >= k ; i--){
				printf("%2d, k=%d, m=%d, l=%d, n=%d \n", array[i][l], k, m, l, n);
			}
			l++;
		}
	}
}

} /* namespace leetcodeeasy */

int main(int argc, char *argv[]){
	int a[3][6] = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}};
	leetcodeeasy::q11::printSpiralArray(3, 6, a);
}
