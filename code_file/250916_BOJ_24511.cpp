#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, num, x;
	cin >> N;
	vector<int> types(N);
	deque<int> dq;
	for (int i = 0; i < N; i++) {
		cin >> types[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (types[i] == 0) {
			dq.push_front(num);
		}
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		if (dq.empty()) {
			cout << num << ' ';
		} else {
			dq.push_back(num);
			cout << dq.front() << ' ';
			dq.pop_front();
		}
	
	}
	return (0);
}