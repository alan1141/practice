/*
 * Soulation2.cpp
 *
 *  Created on: Feb 13, 2018
 *      Author: alan
 */

#include<stack>
#include<iostream>
#include "Soulation2.h"

using namespace std;

namespace soulation2 {

Soulation2::Soulation2() {
	// TODO Auto-generated constructor stub

}

Soulation2::~Soulation2() {
	// TODO Auto-generated destructor stub
}

bool Soulation2::isValid(string s) {
	stack<char> temp;
	for(size_t i = 0 ; i < s.size() ; i++) {
		// (, )', '{', '}', '[' and ']'
		switch(s.at(i)) {
			case '(':
				temp.push('(');
				break;
			case ')':
				if(temp.size() == 0 || temp.top() != '(') return false;
				else temp.pop();
				break;
			case '{':
				temp.push('{');
				break;
			case '}':
				if(temp.size() == 0 || temp.top() != '{') return false;
				else temp.pop();
				break;
			case '[':
				temp.push('[');
				break;
			case ']':
				if(temp.size() == 0 || temp.top() != '[') return false;
				else temp.pop();
				break;
		}
	}
	if(temp.size() != 0) return false;
	else return true;
}

} /* namespace soulation2 */

//int main(int argc, char *argv[]) {
//	string question = "(({[[]]}))]]";
//	soulation2::Soulation2 soulation2;
//	cout << "Answer is " << soulation2.isValid(question) << endl;
//	return 0;
//}
