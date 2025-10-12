#include "queue"
#include "iostream"
#include "string"

using namespace std;

int main() {
	int n;
	int	count = 0;
	queue<int> que;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		que.push(i);
	}
	while (que.size() != 1) {
		if (count % 2 == 0 ) {
			que.pop();
		}
		else {
			que.push(que.front());
			que.pop();
		}
		count++;
	}
	cout << que.front() << endl;
}