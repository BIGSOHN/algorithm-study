#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int tc;
	int	n;
	int sum = 0;
	stack<int> stk;

	cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> n;
		if (n == 0) {
			if (!stk.empty()) {
				sum -= stk.top();
				stk.pop();
			}
		}
		else {
			stk.push(n);
			sum += n;
		}
	}
	cout << sum << "\n";
	return (0);
}