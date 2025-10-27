#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct element
{
	int number;
	bool isChangeable;

	element(int num = 0, bool changeable = true) : number(num), isChangeable(changeable) {}
};

bool checkElement(vector<vector<element>>& sudoku, int x, int y, int num) {
	// 가로 체크
	for (int j = 0; j < 9; j++) {
		if (sudoku[y][j].number == num) {
			return false;
		}
	}
	// 세로 체크
	for (int i = 0; i < 9; i++) {
		if (sudoku[i][x].number == num) {
			return false;
		}
	}
	// 3 * 3 체크
	int boxStartX = (x / 3) * 3;
	int boxStartY = (y / 3) * 3;

	for (int i = boxStartY; i < boxStartY + 3; i++) {
		for (int j = boxStartX; j < boxStartX + 3; j++) {
			if (sudoku[i][j].number == num) {
				return false;
			}
		}
	}
	return true;
}

bool solveSudoku(vector<vector<element>>& sudoku) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (sudoku[i][j].isChangeable == true && sudoku[i][j].number == 0) {
				for (int num = 1; num <= 9; num++) {
					if (checkElement(sudoku, j, i, num)) {
						sudoku[i][j].number = num;
						if (solveSudoku(sudoku)) {
							return true;
						}
					}
					sudoku[i][j].number = 0;
				}
				return false;
			}
		}
	}
	return true;
}

void printSudoku(vector<vector<element>>& sudoku) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << sudoku[i][j].number << " ";
		}
		cout << "\n";
	}
}

int main() {
	vector<vector<element>> sudoku(9, vector<element>(9));
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int N;
			cin >> N;
			sudoku[i][j] = {N, N == 0};
		}
	}
	if (solveSudoku(sudoku)) {
		printSudoku(sudoku);
	}
	return (0);
}