#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, num;
	stack<int> stk;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num == 1) {
			cin >> num;
			stk.push(num);
		} else if (num == 2) {
			if (stk.empty())
				cout << "-1\n";
			else {
				cout << stk.top() << '\n';
				stk.pop();
			}
		} else if (num == 3) {
			cout << stk.size() << '\n';
		} else if (num == 4) {
			if (stk.empty())
				cout << "1\n";
			else
				cout << "0\n";
		} else if (num == 5) {
			if (stk.empty())
				cout << "-1\n";
			else
				cout << stk.top() << '\n';
		}
	}
	return (0);
}