#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M, num;
	vector<int> arr;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr.push_back(num);
	}

	int sum = 0;
	int result = 0;

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				sum = arr[i] + arr[j] + arr[k];
				if (sum > result && sum <= M) {
					result = sum;
				}
			}
		}
	}

	cout << result << '\n';
	return (0);
}