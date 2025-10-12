#include <iostream>
#include <vector>

using namespace std;

void printFactor(vector<int> v, int n) {
	cout << n << " =";
	for (int i = 0; i < v.size(); i++) {
		cout << " " << v[i];
		if (i < v.size() - 1) {
			cout << " +";
		}
	}
	cout << '\n';
}

void findFactor(int n) {
	int sum = 0;
	vector<int> v;

	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum += i;
			v.push_back(i);
			if (sum > n) {
				break ;
			}
		}
	}
	if (sum == n) {
		printFactor(v, n);
	} else {
		cout << n << " is NOT perfect.\n";
	}
}

int main() {
	int n;

	while (1) {
		cin >> n;
		if (n == -1) {
			break;
		}
		findFactor(n);
	}
}