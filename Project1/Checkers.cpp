#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>

using namespace std;


const int row = 8;
const int element = 4;
void zPrintBoard(int *display[row][row], string(&part)[11]);
void zPrintBoard(int *display[row][row], string(&part)[11], string player);
int inputScrambler();

int Checkers() {
	bool diagnostic = 0; bool yes = 0; bool normal = 1; bool playing = 1;
	string parts[11] = { " ", " X", " O", " x", " o", ">X", ">O", ">x", ">o", "---", " |" };

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
	/*if (yes)
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < element; j++) {
			board[i][j] = 1;
		}
	}*/


	while (playing) {
		zPrintBoard(displayboard, parts);
		inputScrambler();

	}


	cin >> pause;
	return 0;
}

void zPrintBoardRaw(int *display[row][row]) {
	// Prints raw result
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			cout << *display[i][j] << ' ';
		}
		cout << '\n';
	}
}

void zPrintBoard(int *display[row][row], string(&part)[11]) {
	string noname = "\b";
	zPrintBoard(display, part, noname);
}

void zPrintBoard(int *display[row][row], string (&part)[11], string player) {
	//string part[11] = { " ", " X ", " O ", " x ", " o ", ">X ", ">O ", ">x ", ">o ", "---", "|" };
	int counter = 0;
	char letter = 'A';

	// Draws upper edge
	cout << "\n\n" << setw(2) << part[0];
	for (int h = 0; h < row; h++)
		cout << setw(4) << h + 1;
	cout << endl << setw(3) << part[0];
	for (int i = 0; i < row; i++)
		cout << setw(4) << part[9];
	cout << endl;

	// Draws the rest of the board
	for (int j = 0; j < row; j++) {
		// Draws the upper space
		cout << setw(2) << part[0];
		for (int l = 0; l < row; l++)
			cout << setw(2) << part[10] << setw(2) << part[0];
		cout << setw(1) << part[10] << endl;

		// Draws the middle space
		cout << setw(1) << part[0] << letter++;
		for (int k = 0; k < row; k++) {
			cout << setw(1) << part[10] << setw(2) << part[*display[counter][k]];
		}
		counter++;
		cout << setw(1) << part[10] << endl;

		// Draws the lower space
		cout << setw(2) << part[0];
		for (int m = 0; m < row; m++)
			cout << setw(2) << part[10] << setw(2) << part[0];
		cout << setw(1) << part[10] << endl;

		// Draws bottom edge
		cout << setw(3) << part[0];
		for (int i = 0; i < row; i++)
			cout << setw(4) << part[9];
		cout << endl;
	}
	cout << "\n  Please enter your next move, Player " << player << ".  ";
}

bool ErrorCheck(char in[6]) {
	int i = 0;

	do {
		for (int j = 0; j < 2; j++) {
			// If character is a number 1-8, check if next character is a letter A-H
			if (in[i] > 48 && in[i] < 57)
				if (toupper(in[i++]) > 64 && toupper(in[i++]) < 73) {
					cout << '\n' << in[i] << ' ' << i << endl;
				}
				else {
					cout << '\n' << in[i] << '*' << in[i++] << '=' << i << endl;
					return 1;
				}
			else if (toupper(in[i]) > 64 && toupper(in[i]) < 73)
				if (in[i++] > 48 && in[i++] < 57);
				else return 1;

				cout << i << ' ' << j << endl;
		}
		// Skips the middle character
		cout << i;
		i++;
		cout << i;
	} while (i < 5);

	cout << i;
	return 0;
}

int inputScrambler() {
	char input[6];
	bool done = 0;

	while (!done) {
		// Ask for input
		cin.getline(input, 6);

		// If no error, stop asking
		if (!ErrorCheck(input)) {
			done = 1;
			cout << "Good.";
		}
		else cout << "Error.";
	}

	return 0;
}