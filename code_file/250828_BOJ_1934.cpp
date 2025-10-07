#include <iostream>

using namespace std;

int gcd_recursive(int a, int b);
int lcm(int a, int b);

int main() {
	int T, A, B;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << lcm(A, B) << '\n'; 
	}
	return (0);
}

int gcd_recursive(int a, int b) {
	if (b == 0) {
		return a;
	}
	return (gcd_recursive(b, a % b));
}

int lcm(int a, int b) {
	return (a / gcd_recursive(a, b)) * b;
}