#include <iostream>
#include <vector>

using namespace std;

int N = 5;

int main() {
	vector<int> arr;
	int input;
	int temp;
	int sum = 0;

	for (int i = 0; i < N; i++) {
		cin >> input;
		arr.push_back(input);
		sum += input;
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	cout << sum / N << '\n';
	cout << arr[2] << '\n';

	return (0);
}