#include <iostream>
#include <vector>

using namespace std;

struct Point {
	int x;
	int y;
};

bool comparePoint (const Point& a, const Point& b);
void mergeSort(vector<Point> &pArr, int left, int right);
void merge(vector<Point> &pArr, int left, int mid ,int right);

int main() {
	int N;
	cin >> N;

	vector<Point> pArr(N);

	for (int i = 0; i < N; i++) {
		cin >> pArr[i].x >> pArr[i].y;
	}
	mergeSort(pArr, 0, N - 1);

	for (int i = 0; i < N; i++) {
		cout << pArr[i].x << ' ' <<  pArr[i].y << '\n';
	}
	return (0);
}

bool comparePoint (const Point& a, const Point& b) {
	if (a.x != b.x) {
		return (a.x <= b.x);
	}
	return (a.y <= b.y);
}

void mergeSort(vector<Point> &pArr, int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;

		mergeSort(pArr, left, mid);
		mergeSort(pArr, mid + 1, right);

		merge(pArr, left, mid, right);
	}
}

void merge(vector<Point> &pArr, int left, int mid ,int right) {
	vector<Point> temp(right - left + 1);
	int i = left;
	int j = mid + 1;
	int k = 0;
	while (i <= mid && j <= right) {
		if (comparePoint(pArr[i], pArr[j])) {
			temp[k++] = pArr[i++];
		} else {
			temp[k++] = pArr[j++];
		}
	}
	while (i <= mid) {
		temp[k++] = pArr[i++];
	}
	while (j <= right) {
		temp[k++] = pArr[j++];
	}
	for (i = left; i <= right; i++) {
		pArr[i] = temp[i - left];
	}
}