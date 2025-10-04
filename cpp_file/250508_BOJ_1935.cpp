#include <iostream>
#include <stack>
#include <iomanip>

using namespace std;

double calculate(double x, char operation, double y) {
	if (operation == '+') {
		return (x + y);
	}
	else if (operation == '-') {
		return (x - y);
	}
	else if (operation == '*') {
		return (x * y);
	}
	else if (operation == '/') {
		return (x / y);
	}
	return (0);
}

int main() {
	double arr[26];
	int	n;
	double x, y;
	string str;
	stack<double> stk;

	cin >> n;
	cin >> str;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			stk.push(arr[str[i] - 'A']);
		}
		else {
			y = stk.top();
			stk.pop();
			x = stk.top();
			stk.pop();
			stk.push(calculate(x, str[i], y));
		}
	}
	cout << fixed << setprecision(2) << stk.top() << "\n";
}