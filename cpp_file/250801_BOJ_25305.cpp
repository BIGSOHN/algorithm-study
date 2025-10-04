#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, k;
	int grade;
	int temp;
	vector<int> arr;

	cin >> N >> k;
	for (int i = 0; i < N; i++) {
		cin >> grade;
		arr.push_back(grade);
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	cout << arr[k - 1] << '\n';
	return (0);
}