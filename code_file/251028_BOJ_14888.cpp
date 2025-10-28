#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool all_zero(vector<int>& sign);

void backtracking(vector<int>& nums, vector<int>& sign, int& min, int& max, int num, int idx) {
	if (all_zero(sign)) {
		if (num > max) {
			max = num;
		}
		if (num < min) {
			min = num;
		}
		return ;
	}
	// +
	if (sign[0] > 0) {
		sign[0]--;
		backtracking(nums, sign, min, max, num + nums[idx], idx + 1);
		sign[0]++;
	}
	// -
	if (sign[1] > 0) {
		sign[1]--;
		backtracking(nums, sign, min, max, num - nums[idx], idx + 1);
		sign[1]++;
	}
	// *
	if (sign[2] > 0) {
		sign[2]--;
		backtracking(nums, sign, min, max, num * nums[idx], idx + 1);
		sign[2]++;
	}
	// /
	if (sign[3] > 0) {
		sign[3]--;
		backtracking(nums, sign, min, max, num / nums[idx], idx + 1);
		sign[3]++;
	}
}

bool all_zero(vector<int>& sign) {
	for (int i = 0; i < sign.size(); i++) {
		if (sign[i] != 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int N;
	cin >> N;
	vector<int> nums(N);
	vector<int> sign(4);
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		nums[i] = num;
	}
	for (int i = 0; i < 4; i++) {
		int num;
		cin >> num;
		sign[i] = num;
	}
	int max = -2147483648;
	int min = 2147483647;
	backtracking(nums, sign, min, max, nums[0], 1);
	cout << max << '\n';
	cout << min << '\n';

	return (0);
}