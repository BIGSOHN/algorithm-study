#include <iostream>
#include <algorithm>

using namespace std;

int QUARTER = 25;
int DIME = 10;
int NICKEL = 5;
int PENNY = 1;


int main() {
	int tc;
	int money;
	int Q, D, N, P;
	cin >> tc;

	for (int i = 0; i < tc; i++) {
		Q = 0;
		D = 0;
		N = 0;
		P = 0;
		cin >> money;
		for (int q = 1; QUARTER * q <= money; q++) {
			Q++;
		}
		money -= (Q * QUARTER);
		for (int d = 1; DIME * d <= money; d++) {
			D++;
		}
		money -= (D * DIME);
		for (int n = 1; NICKEL * n <= money; n++) {
			N++;
		}
		money -= (N * NICKEL);
		for (int p = 1; PENNY * p <= money; p++) {
			P++;
		}
		cout << Q << ' ' << D << ' ' << N << ' ' << P << '\n';
	}
	return (0);
}