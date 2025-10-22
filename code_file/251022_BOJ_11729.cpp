#include <iostream>

using namespace std;

void hanoi(int n, int start, int end, int aux) {
	if (n == 1) {
		cout << start << ' ' << end << '\n';
		return ;
	}
	hanoi(n - 1, start, aux, end);
	cout << start << ' ' << end << '\n';
	hanoi(n - 1, aux, end, start);
}

long long calculateMoves(int n) {
	return (1LL << n) - 1;
}

int main() {
	int N;
	cin >> N;
	cout << calculateMoves(N) << '\n';
	hanoi(N, 1, 3, 2);
}