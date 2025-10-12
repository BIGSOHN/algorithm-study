#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int gcdMultiple(const vector<int>& v) {
	if (v.empty())
		return 0;
	int result = v[0];
	for (int i = 1; i < v.size(); i++) {
		result = gcd(result, v[i]);
		if (result == 1)
			break;
	}
	return (result);
}

int main() {
	int N;
	int num = 0;
	int gcdNum;

	cin >> N;
	vector<int> v(N);
	vector<int> gaps;
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < v.size() - 1; i++) {
		gaps.push_back(v[i + 1] - v[i]);
	}
	gcdNum = gcdMultiple(gaps);
	for (int gap : gaps) {
		num += (gap / gcdNum) - 1;
	}

	cout << num << '\n';
	return (0);
}