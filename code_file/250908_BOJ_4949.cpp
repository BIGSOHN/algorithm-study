#include <iostream>
#include <stack>

using namespace std;

int main() {
	string str;
	
	while (1) {
		stack<char> stk;
		bool isClosed = true;
		getline(cin, str);
		if (str == ".")
			break;
		for (int i = 0 ; i < str.length(); i++) {
			if (str[i] == '[' || str[i] == '(') {
				stk.push(str[i]);
			} else if (str[i] == ')' || str[i] == ']') {
				if (stk.empty()) {
					isClosed = false;
					break;
				} else if ((str[i] == ')' && stk.top() != '(' ) || (str[i] == ']' && stk.top() != '[')) {
					isClosed = false;
					break;
				} else if ((str[i] == ')' && stk.top() == '(' ) || (str[i] == ']' && stk.top() == '[')) {
					stk.pop();
				}
			}
		}
		if (isClosed && stk.empty()) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}
	
	return (0);
}