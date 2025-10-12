#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
	int	testcase;
	int	n;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair <int, int>>> pq;

	pair<int, int> p(1,2);
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		cin >> n;
		if (n != 0) {
			pq.push(make_pair(abs(n), n));
		}
		else if (n == 0) {
			if (!pq.empty()) {
				cout << pq.top().second << "\n";
				pq.pop();
			}	
			else {
				cout << "0\n";
			}
		}
	}
	return (0);
}