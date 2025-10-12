#include <iostream>
#include <string>
#include <queue>

using namespace std;

int	n, m;
queue<int> que;

int main() {
	int	cnt = 1;
	int temp;
	cin >> n >> m;

	for (int i = 1; i < n + 1; i++) {
		que.push(i);
	}
	cout << "<";
	while (!que.empty()) {
		if (cnt % m == 0) {
			cout << que.front();
			que.pop();
			if (!que.empty()) {
				cout << ", ";
			}
		}
		else {
			temp = que.front();
			que.pop();
			que.push(temp);
		}
		cnt++;
	}
	cout << ">\n";
}