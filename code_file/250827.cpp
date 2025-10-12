#include <iostream>
#include <set>

using namespace std;

int main() {
	string str;
	set<string> s;

	cin >> str;
	int len = str.length();
	for (int i = 0; i < len; i++) {
		for (int j = 1; j <= len - i; j++) {
			//substr(시작위치, 길이)
			s.insert(str.substr(i, j));
		}
	}
	cout << s.size() << '\n';
	return (0);
}