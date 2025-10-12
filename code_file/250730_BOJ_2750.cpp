#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	vector<int> arr;
	int input;
	int temp;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		arr.push_back(input);
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

	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}

	return (0);
}