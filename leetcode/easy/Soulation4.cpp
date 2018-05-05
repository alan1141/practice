/*
 * Soulation4.cpp
 *
 *  Created on: Feb 13, 2018
 *      Author: alan
 */

#include<iostream>
#include "Soulation4.h"

namespace leetcodeeasy {

Soulation4::Soulation4() {
	// TODO Auto-generated constructor stub

}

Soulation4::~Soulation4() {
	// TODO Auto-generated destructor stub
}

int Soulation4::maxSubArray(std::vector<int>& nums) {
	int max = nums[0];
	for(size_t x = 0 ; x < nums.size() ; x++) {
		int sum = 0;
		for(size_t y = x ; y <nums.size() ; y++) {
			sum += nums[y];
			if(sum > max) max = sum;
		}
	}
	return max;
}

} /* namespace leetcodeeasy */

//int main(int argc, char *argv[]) {
//	std::vector<int> question;
//	question.push_back(3);
//	question.push_back(-1);
//	question.push_back(6);
//	question.push_back(-3);
//	leetcodeeasy::Soulation4 *soulation4 = new leetcodeeasy::Soulation4();
//	std::cout << soulation4->maxSubArray(question) << std::endl;
//}
