#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	int N, num;
	int k = 1;

	cin >> N;
	vector<int> v(N);
	stack<int> stk;
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == k) {
			k++;
			while (!stk.empty() && stk.top() == k) {
				stk.pop();
				k++;
			}
		} else {
			stk.push(v[i]);
		}
	}
	while (!stk.empty() && stk.top() == k) {
		stk.pop();
		k++;
	}
	if (!stk.empty()) {
		cout << "Sad" << endl;
	} else {
		cout << "Nice" << endl;
	}

	return (0);
}