#include <iostream>
#include <deque>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	deque<int> deq;
	int N;
	int num;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num == 1) {
			cin >> num;
			deq.push_front(num);
		} else if (num == 2) {
			cin >> num;
			deq.push_back(num);
		} else if (num == 3) {
			if (!deq.empty()) {
				cout << deq.front() << '\n';
				deq.pop_front();
			} else {
				cout << "-1" << '\n';
			}
		} else if (num == 4) {
			if (!deq.empty()) {
				cout << deq.back() << '\n';
				deq.pop_back();
			} else {
				cout << "-1" << '\n';
			}
		} else if (num == 5) {
			cout << deq.size() << '\n';
		} else if (num == 6) {
			if (!deq.empty()) {
				cout << "0" << '\n';
			} else {
				cout << "1" << '\n';
			}
		} else if (num == 7) {
			if (!deq.empty()) {
				cout << deq.front() << '\n';
			} else {
				cout << "-1" << '\n';
			}
		} else if (num == 8) {
			if (!deq.empty()) {
				cout << deq.back() << '\n';
			} else {
				cout << "-1" << '\n';
			}
		}
	}
}