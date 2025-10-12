#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	int N, M;
	int cnt = 0;
	cin >> N >> M;
	unordered_set<string> s;
	string input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		s.insert(input);
	}
	for (int i = 0; i < M; i++) {
		cin >> input;
		if (s.count(input)) {
			cnt++;
		}
	}
	cout << cnt << '\n';
	return (0);
}