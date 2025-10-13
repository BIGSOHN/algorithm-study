#include <iostream>
#include <vector>

using namespace std;

void backtracking(int N, int start, int size, vector<int>& v);
void printVector(vector<int> &v);

int main() {
	int N, M;
	vector<int> v;

	cin >> N >> M;
	backtracking(N, 1, M, v);

	return (0);
}

void printVector(vector<int> &v) {
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
	cout << '\n';
}

void backtracking(int N, int start, int size, vector<int>& v) {
	if (v.size() == size) {
		printVector(v);
		return ;
	}
	for (int i = 1; i <= N; i++) {
		v.push_back(i);
		backtracking(N, i, size, v);
		v.pop_back();
	}
}