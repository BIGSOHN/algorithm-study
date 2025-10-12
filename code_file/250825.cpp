#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
	int N, M;
	set<string> listen;
	set<string> see;
	set<string> listenSee;
	string name;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> name;
		listen.insert(name);
	}
	for (int i = 0; i < M; i++) {
		cin >> name;
		see.insert(name);
	}
	set_intersection(listen.begin(), listen.end(), 
	see.begin(), see.end(), inserter(listenSee, listenSee.begin()));
	cout << listenSee.size() << '\n';
	for (string s : listenSee) {
		cout << s << '\n';
	}
	return (0);
}