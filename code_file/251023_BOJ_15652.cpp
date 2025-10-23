#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<int> &v, int start, int depth, int N, int M) {
	if (depth == M) {
		for (int i = 0; i < M; i++) {
			cout << v[i] << ' ';
		}
		cout << '\n';
		return ;
	}
	for (int i = start; i <= N; i++) {
		v[depth] = i;
		dfs(v, i, depth + 1, N, M);
	}
}

int main() {
	int N, M;

	cin >> N >> M;
	vector<int> v(M);
	dfs(v, 1, 0, N, M);
}