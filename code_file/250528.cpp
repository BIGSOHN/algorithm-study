#include <iostream>

using namespace std;

int main() {
	int N;
	long long res = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		res += (N/i) * i;
	}
	
	cout << res << '\n';

	return (0);
}