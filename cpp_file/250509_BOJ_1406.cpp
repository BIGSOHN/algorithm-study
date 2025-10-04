#include <iostream>
#include <list>
#include <string>

using namespace std;

void ftCommand(char cmd, list<char> &lst, list<char>::iterator &cur) {
	char c;

	if (cmd == 'L') {
		if (cur != lst.begin()) {
			cur--;
		}
	}
	else if (cmd == 'D') {
		if (cur != lst.end()) {
			cur++;
		}
	}
	else if (cmd == 'B') {
		if (cur != lst.begin()) {
			cur = lst.erase(--cur);
		}
	}
	else if (cmd == 'P') {
		cin >> c;
		lst.insert(cur, c);
	}
}

int main() {
	string init;
	int	n;
	char cmd;
	list<char> lst;
	list<char>::iterator cur;

	cin >> init;
	for (int i = 0; i < init.length(); i++) {
		lst.push_back(init[i]);
	}
	cur = lst.end();
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		ftCommand(cmd, lst, cur);
	}
	for (cur = lst.begin(); cur != lst.end(); cur++) {
		cout << *cur;
	}
	cout << "\n";
}