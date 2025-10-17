#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int K;
int OUT = 0;

void merge(int start, int mid, int end, vector<int> &v);
void merge_sort(int start, int end, vector<int> &v);

int main() {
	int N, num;
	
	cin >> N >> K;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> num;
		v[i] = num;
	}
	merge_sort(0, v.size() - 1, v);
	if (OUT < K) {
		cout << -1 << '\n';
	}

	return (0);
}

void merge(int start, int mid, int end, vector<int> &v) {
	int i = start;
	int j = mid + 1;
	int k = 0;
	vector<int> temp(end - start + 1);
	
	while (i <= mid && j <= end) {
		if (v[i] < v[j]) {
			temp[k++] = v[i++];
		} else {
			temp[k++] = v[j++];
		}
	}
	while (i <= mid) {
		temp[k++] = v[i++];
	}
	while (j <= end) {
		temp[k++] = v[j++];
	}
	for (int i = start; i <= end; i++) {
		v[i] = temp[i - start];
		OUT++;
		if (OUT == K) {
			cout << v[i] << '\n';
		}
	}
}

void merge_sort(int start, int end, vector<int> &v) {
	if (start < end) {
		int mid = start + ((end - start) / 2);
		merge_sort(start, mid, v);
		merge_sort(mid + 1, end, v);

		merge(start, mid, end, v);
	}
}