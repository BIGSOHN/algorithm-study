#include <iostream>

using namespace std;

int main() {
	int total = 1;
	int N;
	int M = 1;
	
	cin >> N;

	while (total < N) {
		total += (M * 6);
		M++;
	}
	cout << M  << '\n';
}