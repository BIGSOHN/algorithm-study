#include <iostream>
#include <map>
#include <cctype>

using namespace std;

bool isNumber(const string& str);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	string name;
	string f;

	map<int, string> idToName;
	map<string, int> nameToId;

	cin >> N >> M;
	
	for (int i = 1; i <= N; i++) {
		cin >> name;
		idToName.insert({i, name});
		nameToId.insert({name, i});
	}
	for (int i = 0; i < M; i++) {
		cin >> f;
		if (isNumber(f)) {
			if (idToName.find(stoi(f)) != idToName.end()) {
				cout << idToName[stoi(f)] << '\n';
			}
		} else {
			if (nameToId.find(f) != nameToId.end()) {
				cout << nameToId[f] << '\n';
			}
		}
	}
	return (0);
}

bool isNumber(const string& str) {
	for (char c : str) {
		if (!isdigit(c)) {
			return false;
		}
	}
	return !str.empty();
}
