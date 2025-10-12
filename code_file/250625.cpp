#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector<int> xArr;
	vector<int> yArr;
	int x, y;

	for (int i = 0; i < 3; i++) {
		cin >> x >> y;
		if (xArr.empty() || xArr[0] != x)
			xArr.push_back(x);
		if (yArr.empty() || yArr[0] != y)
			yArr.push_back(y);
	}
	if (xArr.size() == 3) {
		cout << xArr[0];
	} else {
		cout << xArr[1];
	}
	cout << ' ';
	if (yArr.size() == 3) {
		cout << yArr[0];
	} else {
		cout << yArr[1];
	}
}