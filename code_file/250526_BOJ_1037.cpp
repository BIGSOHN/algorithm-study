#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int n;
	int m;
	vector <int> arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		arr.push_back(m);
	}
	if (arr.size() == 1) {
		cout << arr.front() * arr.front() << '\n';
	}
	else {
		sort(arr.begin(), arr.end());
		cout << arr.front() * arr.back() << '\n';
	}
}