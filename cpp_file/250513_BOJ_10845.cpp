#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int tc;
	int	n;
	int	m;
	string command;
	queue<int> que;

	cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> command;

		if (command == "push") {
			cin >> n;
			que.push(n);
		}
		if (command == "pop") {
			if (!que.empty()) {
				cout << que.front() << "\n";
				que.pop();
			}
			else {
				cout << "-1\n";
			}
		}
		if (command == "size") {
			cout << que.size() << "\n";
		}
		if (command == "empty") {
			if (!que.empty()) {
				cout << "0\n";
			}
			else {
				cout << "1\n";
			}
		}
		if (command == "front") {
			if (!que.empty()) {
				cout << que.front() << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
		if (command == "back") {
			if (!que.empty()) {
				cout << que.back() << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
	}
	return (0);
}