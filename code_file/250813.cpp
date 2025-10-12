#include <iostream>
#include <vector>
#include <set>

using namespace std;

int findPosition(vector<int> &arr, int target);

int main () {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<int> arr(N);
	set<int> s;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		s.insert(arr[i]);
	}
	vector<int> v(s.begin(), s.end());
	for (int i = 0; i < N; i++) {
		int pos = findPosition(v, arr[i]);
		cout << pos;
		if (i < N - 1) {
			cout << " ";
		}
	}
	cout << '\n';

	return (0);
}

int findPosition(vector<int> &arr, int target) {
	int left = 0;
	int right = arr.size() - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == target) {
			return mid;
		} else if (arr[mid] < target) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	return (-1);
}