/*
 * soulation8.cpp
 *
 *  Created on: Feb 14, 2018
 *      Author: alan
 */

#include<iostream>
#include "soulation8.h"

namespace leetcodeeasy {

soulation8::soulation8() {
	// TODO Auto-generated constructor stub

}

soulation8::~soulation8() {
	// TODO Auto-generated destructor stub
}

int soulation8::maxProfit(std::vector<int>& prices) {
	if(prices.size() == 0) return 0;
	int min_price_index = 0;
	int max_profit = 0;
	for(size_t index = 0 ; index < prices.size() ; index++) {
		if(prices.at(index) < prices.at(min_price_index))
			min_price_index = index;
		int profit = prices.at(index) - prices.at(min_price_index);
		if(profit > max_profit)
			max_profit = profit;
		std::cout << "min_price is " << min_price_index << std::endl;
	}
	return max_profit;
}

} /* namespace leetcodeeasy */

int main(int argc, char *argv[]) {
	leetcodeeasy::soulation8 soulation8;
	std::vector<int> question = {2, 4, 1};
	std::cout << soulation8.maxProfit(question) << std::endl;
}
