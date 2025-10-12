#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, e, f;
	int x = -999;
	int y = -999;

	cin >> a >> b >> c >> d >> e >> f;
	while (x <= 999) {
		y = -999;
		while (y <= 999) {
			if (c == a * x + b * y && f == d * x + e * y) {
				cout << x << ' ' << y << '\n';
				return (0);
			}
			y++;
		}
		x++;
	}
	
	return (0);
}