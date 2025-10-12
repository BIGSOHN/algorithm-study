#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int testcase;
	int n;
	priority_queue<int, vector<int>, greater<int>> pq;

	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		cin >> n;
		if (n != 0) {
			pq.push(n);
		}
		else {
			if (pq.empty()) {
				cout << '0' << '\n';
			}
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
	}
}