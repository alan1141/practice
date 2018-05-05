#include <iostream>
#include <vector>

using namespace std;

string one[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
			    "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string ten[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string printNum(int number, string apendStr){
	//cout << number << endl;
	string str = "";
	if(number > 19) str += ten[number/10] + " " + one[number%10];
	else str += one[number];
	if(number) return str + " " + apendStr + " ";
	return "";
}

string convertNum(int number){
	string str = "";
	str += printNum((number/1000)%1000, "thousand");
	str += printNum((number/100)%10, "hundred");
	str += printNum((number%100), "");
	return str;
}

//int main(int argc, char** argv) {
//	int question = 10000;
//	cout << convertNum(question) << endl;
//	return 0;
//}



