#include <iostream>

using namespace std;

int gcd (int A, int B) {
	if (B == 0) {
		return (A);
	}
	return (gcd(B, A % B));
}

int main() {
	int A, B, C, D;
	cin >> A >> B;
	cin >> C >> D;

	int numerator = A * D + C * B;
	int denominator = B * D;

	int g = gcd(numerator, denominator);
	cout << numerator / g << ' ' << denominator / g;
	return (0);
}