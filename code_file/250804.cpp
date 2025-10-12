#include <iostream>
#include <vector>

using namespace std;

void mergeSort(vector<int>& arr, int left, int right);
void merge(vector<int>& arr, int left, int mid, int right);

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N;
	int temp;
	
	cin >> N;
	vector<int> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	mergeSort(arr, 0, N - 1);

	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}

	return (0);
}

void mergeSort(vector<int>& arr, int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;

		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);

		merge(arr, left, mid, right);
	}
}

void merge(vector<int>& arr, int left, int mid, int right) {
	vector<int> temp(right - left + 1);
	int i = left;
	int j = mid + 1;
	int k = 0;

	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j]) {
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