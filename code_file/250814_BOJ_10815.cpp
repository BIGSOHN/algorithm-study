#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;

	unordered_set<int> cards;
	for (int i = 0; i < N; i++) {
		int card;
		cin >> card;
		cards.insert(card);
	}

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		int target;
		cin >> target;

		if (cards.count(target)) {
			cout << "1 ";
		} else {
			cout << "0 ";
		}
	}
	return (0);
}