/*
 * remove_duplicate.cpp
 *
 *  Created on: Mar 11, 2018
 *      Author: alan
 */
#include<iostream>
#include<set>

void reMoveDuplicate(std::string question){
	std::set<char> set;

	for(size_t i ; i<question.size() ; ++i)
		set.insert(question[i]);

	for(size_t i ; i<question.size() ; ++i){
		char c = question[i];
		if(set.count(c) != 0){
			set.erase(c);
			std::cout << c;
		}
	}
}

//int main(int argc, char** argv) {
//	std::string question = "ccvvvbssssssert";
//	reMoveDuplicate(question);
//}
