#include <iostream>
#include <string>
#include <vector>

using namespace std;

int	k;
const int count = 6;
int result[count];
int lotto[14];

void dfs(int start, int depth);

int main() {
	ios::sync_with_stdio(false);

	while (cin >> k && k != 0) {
		for (int i = 0; i < k; i++) {
			cin >> lotto[i];
		}
		dfs(0, 0);
		cout << "\n";
	}
	return (0);
}

void dfs(int start, int depth) {
	if (depth == count) {
		for (int i = 0; i < count; i++) {
			cout << result[i] << " ";
		}
		cout << "\n";
		return ;
	}
	for (int i = start; i < k; i++) {
		result[depth] = lotto[i];
		dfs(i + 1, depth + 1);
	}
}