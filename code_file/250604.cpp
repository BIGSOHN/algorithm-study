#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

string strs = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string result;

int main() {
	int N, B;
	cin >> N >> B;

	while (N != 0) {
		result += strs[N % B];
		N /= B;
	}
	reverse(result.begin(), result.end());
	cout << result << '\n';
	return (0);
}