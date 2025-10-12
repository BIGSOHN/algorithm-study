#include <iostream>

int array[8];
int result[8];
int n, m;

using namespace std;

void dfs(int start, int depth);

int main() {
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		array[i - 1] = i;
	}
	dfs(0, 0);
	return (0);
}

void dfs(int start, int depth) {
	if (depth == m) {
		for (int i = 0; i < m; i++) {
			cout << result[i] << " ";
		}
		cout << "\n";
		return ;
	}
	for (int i = start; i < n; i++) {
		result[depth] = array[i];
		dfs(i + 1, depth + 1);
	}
}