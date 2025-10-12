#include <iostream>
#include <vector>

using namespace std;

int arr[10001];
int main() {
	int N;
	int num;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[num]++;
	}
	for (int i = 1; i <= 10000; i++) {
		while (arr[i] > 0) {
			cout << i << '\n';
			arr[i]--;
		}
	}
	return (0);
}