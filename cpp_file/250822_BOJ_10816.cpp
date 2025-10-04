#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	int num;
	unordered_map<int, int> hashMap;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		auto it = hashMap.find(num);
		if (it == hashMap.end()) {
			hashMap.insert({num, 1});
		} else {
			it->second++;
		} 
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		auto it = hashMap.find(num);
		if (it == hashMap.end()) {
			cout << 0 << ' ';
		} else {
			cout << it->second << ' ';
		} 
	}
	return (0);
}