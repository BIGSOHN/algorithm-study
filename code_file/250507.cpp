#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isVps(string s) {
	stack<char> stk;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			stk.push(s[i]);
		}
		else if (s[i] == ')') {
			if (stk.empty())
				return false;
			stk.pop();
		}
	}
	return stk.empty();
}

int main() {
	int	n;
	string s;

	cin >> n;
	cin.ignore(256,'\n');
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		if (isVps(s) == true) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}