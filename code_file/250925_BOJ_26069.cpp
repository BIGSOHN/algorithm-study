#include <iostream>
#include <set>

using namespace std;

int main() {
	int N;
	string a, b;
	set<string> s;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		cin >> b;
		if (a == "ChongChong" || b == "ChongChong") {
			s.insert(a);
			s.insert(b);
		} else if (s.find(a) != s.end() || s.find(b) != s.end()) {
			s.insert(a);
			s.insert(b);
		}
	}
	cout << s.size() << '\n';
	return (0);
}