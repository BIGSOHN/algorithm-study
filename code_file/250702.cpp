#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a, b, c;
	vector<int> arr;

	cin >> a >> b >> c;
	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);
	
	sort(arr.begin(), arr.end());
	if (arr[0] + arr[1] > arr[2]) {
		cout << a + b + c;
		return (0);
	}
	while (arr[2] >= arr[0] + arr[1]) {
		arr[2] -= 1;
	}
	cout << arr[0] + arr[1] + arr[2];
	return (0);
}