#include <iostream>

using namespace std;

int divide (int a, int b);

int n, m;


int main() {
	int	divideNum;
	int	mulNum;

	cin >> n >> m;
	if (n > m) {
		divideNum = divide(n, m);
	}
	else {
		divideNum = divide(m, n);
	}
	mulNum = n * m / divideNum;
	cout << divideNum << "\n";
	cout << mulNum << "\n";
}

int divide (int a, int b) {
	if (a % b == 0)
		return (b);
	else
		return (divide(b, a % b));
}