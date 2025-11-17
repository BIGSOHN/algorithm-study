#include <iostream>
#include <vector>

using namespace std;

int dpResult(int N) {
	vector<int> v(N + 1);
	v[1] = 1;
	v[2] = 2;
	if (N == 1) {
		return 1;
	}
	if (N == 2) {
		return 2;
	}
	for (int i = 3; i <= N; i++) {
		v[i] = (v[i - 1] + v[i - 2]) % 15746;
	}
	return (v[N]);
}

int main() {
	int N;
	cin >> N;
	cout << dpResult(N) << '\n';
	return (0);
}