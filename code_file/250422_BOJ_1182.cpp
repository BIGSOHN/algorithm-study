#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n, s;
int	cnt = 0;
int	*arr;

void func(int num, int sum) {
	if (num == n) {
		if (sum == s) {
			cnt++;
		}
		return ;
	}
	
	func (num + 1, sum);
	func (num + 1, sum + arr[num]);
}

int main() {
	ios::sync_with_stdio(false);

	cin >> n >> s;
	arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	func(0, 0);

	if (s == 0)
		cnt--;

	cout << cnt << "\n";
	delete[] arr;
	return (0);
}