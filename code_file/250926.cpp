#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int N, num;
	int sum = 0;

	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> num;
		v[i] = num;
		sum += num;
	}
	sort(v.begin(), v.end());
	int temp = v[0];
	int max_count = 1;
	vector<int> freq;
	int count = 1;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] == v[i - 1]) {
			count++;
		} else {
			if (count > max_count) {
				max_count = count;
				freq.clear();
				freq.push_back(v[i - 1]);
			} else if (count == max_count) {
				freq.push_back(v[i - 1]);
			}
			count = 1;
		}
	}
	if (count > max_count) {
		freq.clear();
		freq.push_back(v.back());
	} else if (count == max_count) {
		freq.push_back(v.back());
	}

	int mode = (freq.size() > 1) ? freq[1] : freq[0];
	int avg = round((double)sum / v.size());
	if (avg == 0) avg = 0;
	cout << avg << '\n';
	cout << v[v.size() / 2] << '\n';
	cout << mode << '\n';
	cout << v[N - 1] - v[0] << '\n';
}