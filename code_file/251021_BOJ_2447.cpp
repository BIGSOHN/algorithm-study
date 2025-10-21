#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void cantor(vector<vector<char>> &vec2D, int x, int y, int size) {
	if (size == 1)
		return ;
	int third = size / 3;
	for (int i = y + third; i < y + (2 * third); i++) {
		for (int j = x + third; j < x + (2 * third); j++) {
			vec2D[i][j] = ' ';
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1)
				continue;
			cantor(vec2D, x + (j * third), y + (i * third), third);
		}
	}
}

void printCantor(vector<vector<char>> &vec2D, int size) {
	for (int y = 0; y < size; y++) {
		for (int x = 0; x < size; x++) {
			cout << vec2D[y][x];
		}
		cout << '\n';
	}
}

int main() {
	int N;

	cin >> N;
	vector<vector<char>> vec2D(N, vector<char>(N, '*'));
	cantor(vec2D, 0, 0, N);
	printCantor(vec2D, N);

	return (0);
}