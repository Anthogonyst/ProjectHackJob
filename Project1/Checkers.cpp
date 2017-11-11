#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>

using namespace std;
const int row = 8;
const int element = 4;

int main() {
	bool diagnostic = 1; bool yes = 0; bool normal = 1;

	int null = 0;
	string pause;

	int *displayboard[row][row];
	int board[row][element];

	cout << "\nBeginning checkers game. Initializing...\n";

	// Initialize display board with board addresses
	for (int i = 0; i < row; i++) {
		if (i % 2) {
			for (int j = 0; j < row; j += 2) {
				displayboard[i][j] = &board[i][j / 2];
			}
			for (int k = 1; k < row; k += 2) {
				displayboard[i][k] = &null;
			}
		}
		else {
			for (int k = 0; k < row; k += 2) {
				displayboard[i][k] = &null;
			}
			for (int j = 1; j < row; j += 2) {
				displayboard[i][j] = &board[i][j / 2];
			}
		}
	}

	// Initialize data board with normal checker setup
	if (normal) {
		int i = 0;
		for (i; i < 3; i++) {
			for (int j = 0; j < element; j++) {
				board[i][j] = 1;
			}
		}
		for (i; i < 5; i++) {
			for (int j = 0; j < element; j++) {
				board[i][j] = 0;
			}
		}
		for (i; i < 8; i++) {
			for (int j = 0; j < element; j++) {
				board[i][j] = 2;
			}
		}
	}

	// Initalizes entire board with ones
	if (yes)
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < element; j++) {
			board[i][j] = 1;
		}
	}

	// Prints raw result
	if (diagnostic)
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			cout << *displayboard[i][j] << ' ';
		}
		cout << '\n';
	}

	cout << "Finished." << -3 % -2 << -3 % 2 << 3 % -2 << 3 % 2 << -2 % -3 << -2 % 3 << 2 % -3 << 2 % 3;
	cin >> pause;
	return 0;
}
