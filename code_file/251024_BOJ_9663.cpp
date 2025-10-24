#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> &v, int point) {
	
	for (int i = 0; i < point; i++) {
		// 직선 검사 로직
		if (v[i] == v[point]) {
			return false;
		}
		// 대각선 검사 로직
		if (abs(v[i] - v[point]) == abs((point - i))) {
			return (false);
		}
	}
	return (true);
}

void nQueen(vector<int> &v, int N, int depth, int point, int &count) {
	if (depth == N) {
		count++;
		return ;
	}
	for (int i = 0; i < N; i++) {
		v[point] = i;
		if (isPossible(v, point) == true) {
			nQueen(v, N, depth + 1, point + 1, count);
		}
	}
}

int main() {
	int N;
	int count = 0;

	cin >> N;
	vector<int> v(N);
	nQueen(v, N, 0, 0, count);
	cout << count << '\n';

	return (0);
}