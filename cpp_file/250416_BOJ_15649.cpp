#include <iostream>
#include <vector>

using namespace std;
void	printSequence(vector<int> &output);
void	makeSequence(vector<int> &numbers, vector<int> &output, vector<bool> &visited, int depth, int m, int n);

int	main () {
	ios::sync_with_stdio(false);
	int n, m;
	int count = 0;

	cin >> m >> n;

	vector<int> numbers(m);
	vector<int> output(n);
	vector<bool> visited(m);

	for (int i = 1 ; i <= m; i++) {
		numbers[i - 1] = i;
	}
	makeSequence(numbers, output, visited, 0, m, n);
	return (0);
}

void	makeSequence(vector<int> &numbers, vector<int> &output, vector<bool> &visited, int depth, int m, int n) {
	if (depth == n) {
		printSequence(output);
		return ;
	}
	else {
		for (int i = 0; i < m; i++) {
			if (visited[i] != true) {
				visited[i] = true;
				output[depth] = numbers[i];
				makeSequence(numbers, output, visited, depth + 1, m, n);
				visited[i] = false;
			}
		}
	}
}

void	printSequence(vector<int> &output) {
	for (int i = 0; i < output.size(); i++) {
		cout << output[i] << " ";
	}
	cout << "\n";
}