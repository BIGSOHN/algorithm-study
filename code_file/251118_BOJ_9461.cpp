#include <iostream>
#include <vector>

using namespace std;

long long wave(int num) {
	vector<long long> v(101);
	v[1] = 1;
	v[2] = 1;
	v[3] = 1;
	v[4] = 2;
	v[5] = 2;
	if (num <= 5) {
		return v[num];
	}
	for (int i = 6; i <= num; i++) {
		v[i] = v[i - 1] + v[i - 5];
	}
	return v[num];
}
int main() {
	int T, N;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		cout << wave(N) << '\n';
	}
	return (0);
}