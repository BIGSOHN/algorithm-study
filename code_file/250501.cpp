#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int tc;
	int	n;
	string command;
	stack<int> stk;

	cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> command;

		if (command == "push") {
			cin >> n;
			stk.push(n);
		}
		if (command == "pop") {
			if (!stk.empty()) {
				cout << stk.top() << "\n";
				stk.pop();
			}
			else {
				cout << "-1\n";
			}
		}
		if (command == "size") {
			cout << stk.size() << "\n";
		}
		if (command == "empty") {
			if (!stk.empty()) {
				cout << "0\n";
			}
			else {
				cout << "1\n";
			}
		}
		if (command == "top") {
			if (!stk.empty()) {
				cout << stk.top() << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
	}
	return (0);
}