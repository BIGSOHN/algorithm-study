#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string strs = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string N;
	int B;
	int digit, position, result = 0;
	cin >> N;
	cin >> B;

	for (int i = 0; i < N.length(); i++) {
		digit = strs.find(N[i]);
		position = pow(B, N.length() - 1 - i);
		result += digit * position;
	}
	cout << result << '\n';
	return (0);
}