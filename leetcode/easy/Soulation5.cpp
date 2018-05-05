/*
 * Soulation5.cpp
 *
 *  Created on: Feb 13, 2018
 *      Author: alan
 */

#include<iostream>
#include "Soulation5.h"

namespace leetcodeeasy {

Soulation5::Soulation5() {
	// TODO Auto-generated constructor stub

}

Soulation5::~Soulation5() {
	// TODO Auto-generated destructor stub
}

int Soulation5::climbStairs(int n) {
	long double answer = 0;
	for(int two_step_num = 0 ; two_step_num * 2 <= n ; two_step_num++) {
		int one_num_step = n - (two_step_num * 2);
		answer += this->factorial(one_num_step + two_step_num)/(this->factorial(one_num_step)*this->factorial(two_step_num));
		//std::cout << two_step_num << " " << one_num_step << " : " << result << " " << answer << std::endl;
	}
	return answer;
}

long double Soulation5::factorial(int n) {
	long double answer =1 ;
	for(int i = 1 ; i <= n ; i++) answer *= i;
	return answer;
}

} /* namespace leetcodeeasy */

//int main(int argc, char *argv[]) {
//	leetcodeeasy::Soulation5 soulation5;
//	std::cout << soulation5.climbStairs(38) << std::endl;
//	//std::cout << soulation5.factorial(34) << " " << soulation5.factorial(33) << std::endl;
//}
