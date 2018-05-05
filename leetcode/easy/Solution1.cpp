/*
 * Solution1.cpp
 *
 *  Created on: Feb 8, 2018
 *      Author: alan
 */

#include<vector>
#include<cstddef>
#include<iostream>
#include "Solution1.h"

using namespace std;

Solution1::Solution1() {
	// TODO Auto-generated constructor stub

}

Solution1::~Solution1() {
	// TODO Auto-generated destructor stub
}

vector<int> Solution1::twoSum(vector<int>& nums, int target) {
	vector<int> answer;
	for(size_t x = 0 ; x < nums.size() ; x++){
		for(size_t y = 0 ; y < nums.size() ; y++){
			if(y == x) continue;
			if( (nums[x] + nums[y]) == target) {
				answer.push_back(x);
				answer.push_back(y);
				return answer;
			}
		}
	}
	answer.push_back(0);
	return answer;
}

//int main(int argc, char *argv[]) {
//	int target = 10;
//	vector<int> question;
//	vector<int> answer;
//	Solution1 solution1;
//	question.push_back(3);
//	question.push_back(6);
//	question.push_back(9);
//	question.push_back(12);
//	question.push_back(1);
//	answer = solution1.twoSum(question, target);
//	cout << "Answer is " << answer[0] << " " << answer[1] << endl;
//	return 0;
//}
