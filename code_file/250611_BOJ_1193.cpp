#include <iostream>

using namespace std;

int main() {
	int N;
	int i = 0;
	int total = 0;

	cin >> N;
	if (N == 1) {
		cout << "1/1";
		return (0);
	}
	while (total < N) {
		total += i;
		i++;
	}
	if (i % 2 != 1) {
		cout << total - N + 1 << '/' << i - (total - N + 1);
	}
	else {
		cout << i - (total - N + 1) << '/' << total - N + 1;
	}
	return (0);
}