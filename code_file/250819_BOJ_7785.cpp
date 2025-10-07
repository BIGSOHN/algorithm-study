#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	string name, log;
	set<string> logList;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> name >> log;
		if (log == "enter") {
			logList.insert(name);
		} else if (log == "leave") {
			logList.erase(name);
		}
	}
	for (auto it = logList.rbegin(); it != logList.rend(); ++it) {
		cout << *it << '\n';
	}
	return (0);
}