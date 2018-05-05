#include<iostream>
#include<list>
#include<string>

int strMath(std::string math){
	std::list<std::string> list;
	std::string tmp = "";

	for(size_t i = 0 ; i<math.size() ; ++i){
		if(math[i]!='+' && math[i]!='-' && math[i]!='*' && math[i]!='/') {
			tmp += math[i];
		} else {
			list.push_back(tmp);
			tmp = math[i];
			list.push_back(tmp);
			tmp = "";
		}
	}
	list.push_back(tmp);

	int sum = std::stoi(list.front());
	list.pop_front();
	while(list.size() != 0) {
		char operatorChar = list.front()[0];
		list.pop_front();
		switch(operatorChar){
		case '+':
			sum += std::stoi(list.front());
			list.pop_front();
			break;
		case '-':
			sum -= std::stoi(list.front());
			list.pop_front();
			break;
		case '*':
			sum *= std::stoi(list.front());
			list.pop_front();
			break;
		case '/':
			sum /= std::stoi(list.front());
			list.pop_front();
			break;
		}
	}
	return sum;

}

int main(int argc, char** argv) {
	std::string question = "1+1+1+1+1*2/5*100";
	std::cout << strMath(question) << std::endl;
}
