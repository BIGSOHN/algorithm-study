#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

bool compare(pair<string, int>&a, pair<string, int>&b) {
	if (a.second != b.second) {
		return a.second > b.second;
	}
	if (a.first.length() != b.first.length()) {
		return a.first.length() > b.first.length();
	}
	return a.first < b.first;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	string word;
	unordered_map<string, int> wordCount;
	vector<pair<string, int>> words;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> word;
		if (word.length() >= M) {
			wordCount[word]++;
		}
	}

	for (auto& p : wordCount) {
		words.push_back({p.first, p.second});
	}
	sort(words.begin(), words.end(), compare);

	for (auto& p : words) {
		cout << p.first << '\n';
	}
	return (0);
}