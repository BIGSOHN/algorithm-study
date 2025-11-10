#include <iostream>
#include <vector>

using namespace std;

int count1 = 0;
int count2 = 0;

int fib(int N) {
	if (N == 1 || N == 2) {
		count1++;
		return 1;
	}
	return (fib(N - 1)+ fib(N - 2));
}

int fibonacci(int N) {
	vector<int> f(N + 1);
	f[1] = f[2] = 1;
	for (int i = 3; i <= N; i++) {
		f[i] = f[i - 1] + f[i - 2];
		count2++;
	}
	return f[N];
}

int main() {
	int N;

	cin >> N;
	fib(N);
	fibonacci(N);
	cout << count1 << ' ' << count2 << '\n';
	return (0);
}