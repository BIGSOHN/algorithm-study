#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string str;
	stack<int> stk;

	int	cnt = 0;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(' && str[i + 1] == ')') {
			cnt += stk.size();
			i++;
		}
		else if (str[i] == '(') {
			stk.push(i);
		}
		else if (str[i] == ')') {
			cnt++;
			stk.pop();
		}
	}
	cout << cnt << "\n";
}