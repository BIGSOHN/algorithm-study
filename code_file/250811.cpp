#include <iostream>
#include <vector>
#include <set>

using namespace std;

void mergeSort(vector<string> &v, int left, int right);
void merge(vector<string> &v, int left, int mid, int right);
bool compareStirng(string a, string b);

int main() {
	int N;

	cin >> N;
	set<string> uniqueSet;
	for (int i = 0; i < N; i++){
		string input;
		cin >> input;
		uniqueSet.insert(input);
	}
	vector<string> v(uniqueSet.begin(), uniqueSet.end());

	mergeSort(v, 0, v.size() - 1);
	for (int i = 0; i < v.size(); i++){
		cout << v[i] << '\n';
	}
}

bool compareStirng(string a, string b) {
	if (a.length() == b.length()) {
		return (a <= b);
	}
	else if (a.length() < b.length()) {
		return (true);
	} else {
		return (false);
	}
}

void mergeSort(vector<string> &v, int left, int right) {
	if (left < right) {
		int mid = left + ((right - left) / 2);

		mergeSort(v, left, mid);
		mergeSort(v, mid + 1, right);

		merge(v, left, mid, right);
	}
	
}

void merge(vector<string> &v, int left, int mid, int right) {
	int i = left;
	int j = mid + 1;
	int k = 0;
	vector<string> temp(right - left + 1);

	while (i <= mid && j <= right) {
		if (compareStirng(v[i], v[j])) {
			temp[k++] = v[i++];
		} else {
			temp[k++] = v[j++];
		}
	}
	while (i <= mid) {
		temp[k++] = v[i++];
	}
	while (j <= right) {
		temp[k++] = v[j++];
	}
	for (int i = left; i <= right; i++) {
		v[i] = temp[i - left];
	}
}