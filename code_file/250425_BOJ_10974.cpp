#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int n;

void printArray(vector<int> &arr) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main() {
	cin >> n;
	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}

	do {
		printArray(arr);
	} while (next_permutation(arr.begin(), arr.end()));
}