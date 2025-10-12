#include <iostream>
#include <vector>

using namespace std;

void mergeSort(vector<int> &arr, int left, int right);
void merge(vector<int> &arr, int left, int mid, int right);

int main() {
	string numberString;

	cin >> numberString;
	vector<int> numbers(numberString.length());
	for (int i = 0; i < numberString.length(); i++) {
		numbers[i] = numberString[i] - '0';
	}
	mergeSort(numbers, 0, numberString.length() - 1);
	for (int i = 0; i < numberString.length(); i++) {
		cout << numbers[i];
	}
	cout << '\n';

	return (0);
}

void mergeSort(vector<int> &arr, int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);

		merge(arr, left, mid, right);
	}
}

void merge(vector<int> &arr, int left, int mid, int right) {
	vector<int> temp(right - left + 1);
	int i = left;
	int j = mid + 1;
	int k = 0;
	while (i <= mid && j <= right) {
		if (arr[i] >= arr[j]) {
			temp[k++] = arr[i++];
		} else {
			temp[k++] = arr[j++];
		}
	}
	while (i <= mid) {
		temp[k++] = arr[i++];
	}
	while (j <= right) {
		temp[k++] = arr[j++];
	}
	for (i = left; i <= right; i++) {
		arr[i] = temp[i - left];
	}
}