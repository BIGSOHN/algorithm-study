#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	int count = 0;
	string name;
	set<string> s;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> name;
		if (name == "ENTER") {
			s.clear();
		} else if (s.find(name) == s.end()) {
			s.insert(name);
			count++;
		}
	}
	cout << count << '\n';
	return (0);
}